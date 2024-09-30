// https://leetcode.com/problems/snail-traversal/

/**
 * @param {number} rowsCount
 * @param {number} colsCount
 * @return {Array<Array<number>>}
 */
Array.prototype.snail = function(rowsCount, colsCount) {
  if (rowsCount * colsCount !== this.length) return []

  const result = new Array(rowsCount)
      .fill(null)
      .map(() => []);

  let index = 0;
  let direction = 0;

  this.forEach((item) => {
      index += direction;
      result[index]?.push(item)

      if (rowsCount === 1) {
          direction = 0
      } else if (index === rowsCount - 1) {
          if (direction === 1) {
              direction = 0;
          } else {
              direction = -1;
          }
      } else if (index == 0) {
          if (direction === -1) {
              direction = 0;
          } else {
              direction = 1;
          }
      }
  });

  return result;
}

/**
* const arr = [1,2,3,4];
* arr.snail(1,4); // [[1,2,3,4]]
*/