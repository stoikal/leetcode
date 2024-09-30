// https://leetcode.com/problems/event-emitter/

class EventEmitter {
  subscribers = {}
  /**
   * @param {string} eventName
   * @param {Function} callback
   * @return {Object}
   */
  subscribe(eventName, callback) {
      const arr = this.subscribers[eventName] || []
      arr.push(callback)
      this.subscribers[eventName] = arr
  
      return {
          unsubscribe: () => {
              this.subscribers[eventName] = this.subscribers[eventName].filter(cb => cb !== callback)
          }
      };
  }
  
  /**
   * @param {string} eventName
   * @param {Array} args
   * @return {Array}
   */
  emit(eventName, args = []) {
      const arr = this.subscribers[eventName] || []

      return arr.map((fn) => fn(...args))
  }
}

/**
* const emitter = new EventEmitter();
*
* // Subscribe to the onClick event with onClickCallback
* function onClickCallback() { return 99 }
* const sub = emitter.subscribe('onClick', onClickCallback);
*
* emitter.emit('onClick'); // [99]
* sub.unsubscribe(); // undefined
* emitter.emit('onClick'); // []
*/