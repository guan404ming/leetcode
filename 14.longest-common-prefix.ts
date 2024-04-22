/*
 * @lc app=leetcode id=14 lang=typescript
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
function longestCommonPrefix(strs: string[]): string {
  strs.sort((a, b) => a.length - b.length);
  const chars = [...strs[0]];
  let res = "";

  for (let i in chars) {
    let shouldAdd = true;

    for (let target of strs) {
      if ([...target][i] !== chars[i]) {
        shouldAdd = false;
        return res;
      }
    }
    res += chars[i];
  }
  return res;
}
// @lc code=end

function BetterLongestCommonPrefix(strs: string[]): string {
  let minLength = Infinity;
  let res = "";

  for (const str of strs) {
    minLength = Math.min(minLength, str.length);
  }

  for (let i = 0; i < minLength; i++) {
    const curChar = strs[0][i];

    for (let j = 1; j < strs.length; j++) {
      if (strs[j][i] !== curChar) {
        return res;
      }
    }
    res += curChar;
  }
  return res;
}
