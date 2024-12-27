/*
 * @lc app=leetcode id=70 lang=cpp
 * @lcpr version=30204
 *
 * [70] Climbing Stairs
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
    int climbStairs(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;

        int a = 1;
        int b = 2;

        for (int i = 3; i <= n; i++) {
            int temp = b;
            b = a + b;
            a = temp;
        }

        return b;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 3\n
// @lcpr case=end

 */

