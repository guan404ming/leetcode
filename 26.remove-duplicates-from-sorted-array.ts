/*
 * @lc app=leetcode id=26 lang=typescript
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
function removeDuplicates(nums: number[]): number {
  for (let i = 1; i < nums.length; i++) {
    if (nums[i] === nums[i - 1]) {
      nums.splice(i, 1);
      i--;
    }
  }

  return nums.length;
}

// @lc code=end

// two pointer
const BetterRemoveDuplicates = (nums: number[]): number => {
    let k: number = 1;

    for (let i = 1; i < nums.length; i++) {
        if (nums[i] !== nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
};

// set
const BetterRemoveDuplicatesV2 = (nums: number[]): number => {
    let temp = [...new Set(nums)];
    nums.length = 0;
    nums.push(...temp);
    return nums.length;
};
