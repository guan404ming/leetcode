/*
 * @lc app=leetcode id=217 lang=cpp
 * @lcpr version=30204
 *
 * [217] Contains Duplicate
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
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int> s{nums.begin(), nums.end()};

        // return s.size() != nums.size();

        unordered_set<int> seen; 
        for (int num : nums) {
            if (seen.count(num)) { 
                return true;
            }
            seen.insert(num); 
        }
        return false;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3,1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// [1,1,1,3,3,4,3,2,4,2]\n
// @lcpr case=end

 */

