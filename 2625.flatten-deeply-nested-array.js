// https://leetcode.com/problems/flatten-deeply-nested-array/

/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, n) {
    return arr.reduce((acc, item) => {
        if (Array.isArray(item) && n > 0) {
            acc.push(...flat(item, n - 1));
        } else {
            acc.push(item);
        }

        return acc;
    }, []);
};

