// https://leetcode.com/problems/call-function-with-custom-context/

/**
 * @param {Object} context
 * @param {Array} args
 * @return {null|boolean|number|string|Array|Object}
 */
Function.prototype.callPolyfill = function(context, ...args) {
  const functionId = Symbol();
  context[functionId] = this;
  const result = context[functionId](...args);
  delete context[functionId];

  return result;
}

/**
* function increment() { this.count++; return this.count; }
* increment.callPolyfill({count: 1}); // 2
*/