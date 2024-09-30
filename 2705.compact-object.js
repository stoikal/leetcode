// https://leetcode.com/problems/compact-object/

/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
var compactObject = function(obj) {
  if (Array.isArray(obj)) {
      return obj
          .filter(Boolean)
          .map(compactObject);
  }

  if (typeof obj !== "object") {
      return obj;
  }
  
  const compact = {}

  for (const key in obj) {
      if (obj[key]) {
          compact[key] = compactObject(obj[key])
      }
  }

  return compact;
};