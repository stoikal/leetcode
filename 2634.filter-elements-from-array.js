// https://leetcode.com/problems/filter-elements-from-array

/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
const filter = function(arr, fn) {
    // return arr.filter(fn)

    let filteredArr = [];

    arr.forEach((n, i) => {
        if (fn(n, i)) {
            filteredArr.push(n);
        }
    });

    return filteredArr;
};