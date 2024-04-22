/*
 * @lc app=leetcode id=1 lang=typescript
 *
 * [1] Two Sum
 */

// @lc code=start
function twoSum(nums: number[], target: number): number[] {
  const map = new Map<number, number>();
  for (let index = 0; index < nums.length; index++) {
    if (map.get(nums[index]) !== undefined) {
      return [map.get(nums[index])!, index];
    }

    map.set(target - nums[index], index);
  }

  return [];
}
// @lc code=end

function BetterTwoSum(nums: number[], target: number): number[] {
  const numMap = new Map();

  for (let i = 0; i < nums.length; i++) {
    const num = nums[i];
    const difference = target - num;

    if (numMap.has(difference)) return [numMap.get(difference), i];
    else numMap.set(num, i);
  }

  return [];
}
