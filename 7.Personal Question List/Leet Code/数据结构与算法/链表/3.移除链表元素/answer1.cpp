// 2025-12-6

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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *current = head,*pre = nullptr;
        while(current != nullptr) {
            if (current->val == val) {
                ListNode *temp = current;

                if (pre == nullptr) {
                    head = current->next;
                }
                else {
                    pre->next = current->next;
                }
                current = current->next;

                delete temp;
            }
            else {
                pre = current;
                current = current->next;
            }
        }
        return head;
    }
};