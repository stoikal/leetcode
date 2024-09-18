var isPalindrome = function(s) {
  const half = Math.floor(s.length / 2)

  for (let i = 0; i < half; i++) {    
      if (s.at(i) !== s.at(-1 * i - 1)) {
          return false
      }
  }

  return true
}

/**
 * https://leetcode.com/problems/longest-palindromic-substring/
 * 
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
  let curr = s.length

  while (curr) {
      for (let i = 0; i + curr <= s.length; i++) {
          const substr = s.substring(i, i+ curr)
          if (isPalindrome(substr)) {
              return substr
          }
      }
      curr--
  }

  return null
};