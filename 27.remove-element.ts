/*
 * @lc app=leetcode id=27 lang=typescript
 *
 * [27] Remove Element
 */

// @lc code=start
function removeElement(nums: number[], val: number): number {
  let k = 0;

  for (let i = 0; i < nums.length; i++) {
    if (nums[i] !== val) {
      nums[k] = nums[i];
      k++;
    }
  }

  return k;
}

// @lc code=end

function BetterRemoveElement(nums: number[], val: number): number {
  let j = 0;
  for (let n of nums) {
    if (n !== val) {
      nums[j] = n;
      j++
    }
  }
  return j;
}

function BetterRemoveElementV2(nums: number[], val: number): number {
  let startP = 0;
  let endP = nums.length - 1;
  let k = nums.length;
  while (startP <= endP) {
    if (nums[startP] === val) {
      if (nums[endP] === val) {
        endP--;
        k--;
        continue;
      } else {
        nums[startP] = nums[endP];
        nums[endP] = -1;
        endP--;
        k--;
      }
    }
    startP++;
  }
  return k;
}
