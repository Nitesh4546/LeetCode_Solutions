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
        ListNode *temp = head;
        int i = 0;
        while(temp != nullptr) {
            temp = temp->next;
            if(i > 10000) {
                return true;
            }
            i++;
        }
        return false;
    }
};