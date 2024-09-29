// https://leetcode.com/problems/chunk-array/

/**
 * @param {Array} arr
 * @param {number} size
 * @return {Array}
 */
var chunk = function(arr, size) {
    const result = [];

    for (let i = 0; i < arr.length; i += size) {
        const sub = [];

        for (let j = 0; j < size; j++) {
            let idx = i + j;

            if (idx === arr.length) break;

            sub.push(arr[idx]);
        }

        result.push(sub);
    }

    return result;
};
