// https://leetcode.com/problems/array-reduce-transformation

/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
const reduce = function(nums, fn, init) {
    let res = init;

    nums.forEach((item) => {
        res = fn(res, item);
    });

    return res
};