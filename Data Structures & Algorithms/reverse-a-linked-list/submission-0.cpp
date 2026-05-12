/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *pre = nullptr;
        ListNode *post = nullptr;
        ListNode *cur = head;
        while(cur != nullptr)
        {
            post = cur->next;
            cur->next = pre;
            pre = cur;
            cur = post;
        }
        head = pre;
        return head;
    }
};
