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
    ListNode* partition(ListNode* head, int x) {
        ListNode *les = new ListNode(-1);
        ListNode *gre = new ListNode(-1);
     
        ListNode *temp = head;
        ListNode *ptrl = les;
        ListNode *ptrg = gre;

        while(temp != nullptr) {
            if(temp->val < x) {
                ptrl->next = temp;
                ptrl = ptrl->next;
            }else {
                ptrg->next = temp;
                ptrg = ptrg->next;
            }
            temp = temp->next;
        }
        ptrg->next = nullptr;
        ptrl->next = gre->next;
        return les->next;
    }
};