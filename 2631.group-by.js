// https://leetcode.com/problems/group-by

/**
 * @param {Function} fn
 * @return {Object}
 */
Array.prototype.groupBy = function(fn) {
    return this.reduce((acc, curr) => {
        const key = fn(curr);
        const group = acc[key] || [];
        group.push(curr);

        acc[key] = group;

        return acc;
    }, {})
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */