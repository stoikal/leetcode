// https://leetcode.com/problems/join-two-arrays-by-id/

/**
 * @param {Array} arr1
 * @param {Array} arr2
 * @return {Array}
 */
var join = function(arr1, arr2) {
  const obj1 = arr1.reduce((acc, item) => {
      acc[item.id] = item
      return acc
  }, {})

  const combined = arr2.reduce((acc, item) => {
      if (acc[item.id]) {
          acc[item.id] = { ...acc[item.id], ...item }
      } else {
          acc[item.id] = item
      }
      return acc
  }, obj1)

  return Object.values(combined);
};