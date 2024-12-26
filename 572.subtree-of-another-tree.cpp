/*
 * @lc app=leetcode id=572 lang=cpp
 * @lcpr version=30204
 *
 * [572] Subtree of Another Tree
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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        // if (root->val == subRoot->val && !subRoot->left && !subRoot->right) return true;

        auto findIdentical = [&](TreeNode *root_, TreeNode* subRoot_, auto&& findIdentical) -> bool {
            if (!subRoot_ && !root_) return true;
            if (!subRoot_ || !root_) return false;

            if (root_->val == subRoot_->val) {
                return (
                    findIdentical(root_->left, subRoot_->left, findIdentical)
                    && findIdentical(root_->right, subRoot_->right, findIdentical)
                );
            }

            return false;
        };

        if (findIdentical(root, subRoot, findIdentical)) return true;
        return(isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot));
    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,4,5,1,2]\n[4,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [3,4,5,1,2,null,null,null,null,0]\n[4,1,2]\n
// @lcpr case=end

 */

