// https://leetcode.com/problems/function-composition/

/**
 * @param {Function[]} functions
 * @return {Function}
 */
const compose = function(functions) {
    return function(x) {
        // let ans = x;

        // while(functions.length) {
        //     ans = functions.pop()(ans);
        // }

        // return ans;

        return functions.reduceRight((acc, fn) => {
            return fn(acc);
        }, x)
    }
};

/**
 * const fn = compose([x => x + 1, x => 2 * x])
 * fn(4) // 9
 */