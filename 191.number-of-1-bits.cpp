/*
 * @lc app=leetcode id=191 lang=cpp
 * @lcpr version=30204
 *
 * [191] Number of 1 Bits
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
    int hammingWeight(int n) {
        int res = 0;

        while (n != 0) {
            if (n % 2 == 1) {
                res += 1;
            } 

            n /= 2;
        }

        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 11\n
// @lcpr case=end

// @lcpr case=start
// 128\n
// @lcpr case=end

// @lcpr case=start
// 2147483645\n
// @lcpr case=end

 */

