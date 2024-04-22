/*
 * @lc app=leetcode id=13 lang=typescript
 *
 * [13] Roman to Integer
 */

// @lc code=start
function romanToInt(s: string): number {
  const chars = [...s];
  const symbolToValue = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };

  let ans = 0;
  let shouldCount = true;
  chars.forEach((char, i) => {
    if (!shouldCount) {
      shouldCount = true;
      return;
    }

    if (i == chars.length - 1) {
      ans += symbolToValue[char];
    } else if ((chars[i + 1] == "V" || chars[i + 1] == "X") && char == "I") {
      ans += symbolToValue[chars[i + 1]] - symbolToValue["I"];
      shouldCount = false;
    } else if ((chars[i + 1] == "L" || chars[i + 1] == "C") && char == "X") {
      ans += symbolToValue[chars[i + 1]] - symbolToValue["X"];
      shouldCount = false;
    } else if ((chars[i + 1] == "D" || chars[i + 1] == "M") && char == "C") {
      ans += symbolToValue[chars[i + 1]] - symbolToValue["C"];
      shouldCount = false;
    } else {
      ans += symbolToValue[char];
      shouldCount = true;
    }
  });

  return ans;
}
// @lc code=end

/* Better Solution
function romanToInt(s: string): number {
  const symbolToValue: { [key: string]: number } = {
        I: 1,
        V: 5,
        X: 10,
        L: 50,
        C: 100,
        D: 500,
        M: 1000,
    };

    let total = 0;
    const chars = [...s];
    for (let i = 0; i < chars.length; i++) {
        const value = symbolToValue[chars[i]];
        if (i + 1 < chars.length && value < symbolToValue[chars[i + 1]]) {
            total -= value;
        } else {
            total += value;
        }
    }

    return total;
}
*/
