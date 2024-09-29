// https://leetcode.com/problems/sort-by/

/**
 * @param {Array} arr
 * @param {Function} fn
 * @return {Array}
 */
const sortBy = function(arr, fn) {
    return arr
        .sort((a, b) =>  fn(a) - fn(b));
};