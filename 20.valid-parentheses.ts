/*
 * @lc app=leetcode id=20 lang=typescript
 *
 * [20] Valid Parentheses
 */

// @lc code=start
function isValid(s: string): boolean {
  const leftSymbols = ["(", "[", "{"];
  const rightSymbols = [")", "]", "}"];

  const stack: string[] = [];

  for (let char of s) {
    if (leftSymbols.includes(char)) {
      stack.push(char);
    } else {
      if (
        leftSymbols.indexOf(stack[stack.length - 1]) ===
        rightSymbols.indexOf(char)
      ) {
        stack.pop();
      } else {
        return false;
      }
    }
  }

  return stack.length === 0;
}
// @lc code=end

function BetterIsValid(s: string): boolean {
  const bracketsMap = {
    ")": "(",
    "]": "[",
    "}": "{",
  };

  const stack: string[] = [];

  for (let i = 0; i < s.length; i++) {
    const curChar = s[i];
    if (["(", "[", "{"].includes(curChar)) {
      stack.push(curChar);
    } else {
      if (stack.pop() !== bracketsMap[curChar]) {
        return false;
      }
    }
  }

  return !stack.length;
}
