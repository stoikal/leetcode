// https://leetcode.com/problems/execute-asynchronous-functions-in-parallel/

/**
 * @param {Array<Function>} functions
 * @return {Promise<any>}
 */
var promiseAll = function(functions) {
    return new Promise((resolve, reject) => {
        const results = [];
        let count = 0;
        functions.forEach((fn, index) => {
            fn()
                .then(result => {
                    count++;
                    results[index] = result;
                    if (count === functions.length) resolve(results);
                })
                .catch(err => reject(err));
        })
    });
};

/**
* const promise = promiseAll([() => new Promise(res => res(42))])
* promise.then(console.log); // [42]
*/