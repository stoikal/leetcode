/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
  let result = 0
  let current = ''

  for (let i = 0; i < s.length; i++) {
      const char = s[i]
      const index = current.indexOf(char)

      if (index > -1) {
          if (result < current.length) result = current.length

          current = current.substring(index + 1) + char
      } else {
          current += char
      }

      if (i === s.length - 1) {
          if (current.length > result) result = current.length
      }
  }

  return result
};
