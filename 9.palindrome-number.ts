/*
 * @lc app=leetcode id=9 lang=typescript
 *
 * [9] Palindrome Number
 */

// @lc code=start
function isPalindrome(x: number): boolean {
  return String(x).split("").reverse().join("") === String(x);
}
// @lc code=end

function BetterIsPalindrome(x: number): boolean {
  let number = x.toString();

  for (let i = 0; i < number.length; ++i) {
    if (number[i] === number[number.length - i - 1]) {
      continue;
    }

    return false;
  }

  return true;
}
