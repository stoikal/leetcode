// https://leetcode.com/problems/apply-transform-over-each-element-in-array/

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
const map = function(arr, fn) {
    const result = [];

    arr.forEach((n, i) => {
        result.push(fn(n, i));
    });

    return result;
};