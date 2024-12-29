/*
 * @lc app=leetcode id=338 lang=cpp
 * @lcpr version=30204
 *
 * [338] Counting Bits
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
    vector<int> countBits(int n) {
        // vector<int> v;
        
        // for (int i = 0; i <= n; i++) {
        //     int res = 0;
        //     int cur = i;
        //     while (cur != 0) {
        //         if (cur % 2 == 1) {
        //             res += 1;
        //         }
        //         cur /= 2;
        //     }

        //     v.push_back(res);
        // }

        // return v;

        vector<int> v(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            v[i] = v[i >> 1] + (i & 1);
        }
        return v;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 5\n
// @lcpr case=end

 */

