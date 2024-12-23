/*
 * @lc app=leetcode id=124 lang=cpp
 * @lcpr version=30204
 *
 * [124] Binary Tree Maximum Path Sum
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxPathSum(TreeNode* root) {
        int total_max = -10000;
        int round_max = -10000;

        auto getMaxPath = [&](TreeNode *root_, auto&& getMaxPath) -> int {
            int left = 0, right = 0;

            if (root_->left != nullptr) {
                left += getMaxPath(root_->left, getMaxPath);
            } else {
                left = -10000;
            }

            if (root_->right != nullptr) {
                right += getMaxPath(root_->right, getMaxPath);
            } else {
                right = -10000;
            }

            cout << right << "<>" << left << "\n";
            
            if (root == root_) {
                total_max = max(root_->val + max(0, max(left + right, max(left, right))), total_max);
            } else {
                total_max = max(root_->val + max(0, max(left, right)), total_max);
                round_max = max(root_->val + left + right, round_max);
            }
            
            return root_->val + max(0, max(left, right));
        };

        getMaxPath(root, getMaxPath);

        return max(total_max, round_max);
    }
};
// @lc code=end



/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [-10,9,20,null,null,15,7]\n
// @lcpr case=end

 */

