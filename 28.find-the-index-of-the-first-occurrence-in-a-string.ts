/*
 * @lc app=leetcode id=28 lang=typescript
 *
 * [28] Find the Index of the First Occurrence in a String
 */

// @lc code=start
function strStr(haystack: string, needle: string): number {
  for (let index = 0; index < haystack.length; index++) {
    if (haystack.slice(index, index + needle.length) === needle) {
      return index;
    }
  }

  return -1;
}
// @lc code=end
