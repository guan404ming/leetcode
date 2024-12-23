/*
 * @lc app=leetcode id=128 lang=cpp
 * @lcpr version=30204
 *
 * [128] Longest Consecutive Sequence
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0; 

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());

        int cnt = 1, ans = 1;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] + 1 == nums[i+1]) {
                cnt += 1;
            } else {
                ans = max(cnt, ans);
                cnt = 1;
            }
        }

        return max(cnt, ans);
    }
};
// @lc code=end



/*
// @lcpr case=start
// [100,4,200,1,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,3,7,2,5,8,4,6,0,1]\n
// @lcpr case=end

 */

