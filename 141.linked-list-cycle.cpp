/*
 * @lc app=leetcode id=141 lang=cpp
 * @lcpr version=30204
 *
 * [141] Linked List Cycle
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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return false;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast and fast->next) {
            if (slow == fast) {
                return true;
            }
                
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return false;

        // unordered_map<ListNode*, int> q;

        // while (head->next != nullptr) {
        //     if (q.find(head) == q.end()) {
        //         q[head] = head->val;
        //     } else {
        //         return true;
        //     }

        //     head = head->next;
        // } 

        // return false;


    }
};
// @lc code=end



/*
// @lcpr case=start
// [3,2,0,-4]\n1\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n0\n
// @lcpr case=end

// @lcpr case=start
// [1]\n-1\n
// @lcpr case=end

 */

