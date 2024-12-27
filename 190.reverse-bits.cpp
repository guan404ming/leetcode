/*
 * @lc app=leetcode id=190 lang=cpp
 * @lcpr version=30204
 *
 * [190] Reverse Bits
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
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;

        for (auto i = 0; i < 32; i++) {
            // move (wanted bit to last) and mask (000...0001)
            unsigned int bit = (n >> i) & 1;
            res += pow(2, 32 - i - 1) * bit;

            std::cout << bit;
        }

        return res;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 00000010100101000001111010011100\n
// @lcpr case=end

// @lcpr case=start
// 11111111111111111111111111111101\n
// @lcpr case=end

 */

