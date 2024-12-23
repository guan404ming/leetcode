/*
 * @lc app=leetcode id=417 lang=cpp
 * @lcpr version=30204
 *
 * [417] Pacific Atlantic Water Flow
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
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        // define constant
        int m = heights.size(), n = heights[0].size();
        vector<vector<bool>> P(m, vector<bool>(n, false));
        vector<vector<bool>> A(m, vector<bool>(n, false));

        // define dfs func
        auto dfs = [&](int row, int col, vector<vector<bool>>& ocean, auto&& dfs) -> void  {
            ocean[row][col] = true;
            vector<pair<int, int>> moves = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

            for (auto [drow, dcol] : moves) {
                int newRow = row + drow, newCol = col + dcol;

                if (newRow >= 0 
                    && newCol >= 0 
                    && newRow < m 
                    && newCol < n 
                    && !ocean[newRow][newCol]
                    && heights[newRow][newCol] >= heights[row][col]
                ) {
                    dfs(newRow, newCol, ocean, dfs);
                }
            }
        };

        // traverse y
        for (int i = 0; i < m; i++) {
            dfs(i, 0, P, dfs);
            dfs(i, n - 1, A, dfs);
        }

        // traverse x
        for (int i = 0; i < n; i++) {
            dfs(0, i, P, dfs);
            dfs(m - 1, i, A, dfs);
        }


        // output
        vector<vector<int>> ans;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (P[i][j] && A[i][j]) {
                    ans.push_back({i, j});
                }
            }
        }


        return ans;
    }
};
// @lc code=end



/*
// @lcpr case=start
// [[1,2,2,3,5],[3,2,3,4,4],[2,4,5,3,1],[6,7,1,4,5],[5,1,1,2,4]]\n
// @lcpr case=end

// @lcpr case=start
// [[1]]\n
// @lcpr case=end

 */

