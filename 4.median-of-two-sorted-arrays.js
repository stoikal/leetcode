var mergeArr = function(arr1, arr2) {
  let result = []
  let index1 = 0
  let index2 = 0

  while (index1 < arr1.length || index2 < arr2.length) {
      const num1 = arr1[index1]
      const num2 = arr2[index2]
  
      if (num1 !== undefined && num2 !== undefined) {
          if (num1 <= num2) {
              result.push(num1);
              index1++
          } else  {
              result.push(num2);
              index2++
          }
      } else if (num1 !== undefined) {
          result.push(num1);
          index1++
      } else {
          result.push(num2);
          index2++
      }
  }

  return result
}

/**
 * https://leetcode.com/problems/median-of-two-sorted-arrays/
 * 
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
*/
var findMedianSortedArrays = function(nums1, nums2) {
  const merged = mergeArr(nums1, nums2);
  
  if (merged.length % 2 > 0) {
      return merged[Math.floor(merged.length / 2)];
  }

  return (merged[(merged.length / 2) - 1] + merged[merged.length / 2]) / 2;
};