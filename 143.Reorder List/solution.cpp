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
    ListNode* rev(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;  
            curr->next = prev; 
            prev = curr;       
            curr = next;       
        }
        return prev; 
    }
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return;
        }
        
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode *h1 = rev(slow->next);
        slow->next = nullptr;
        ListNode *h2 = head;
        ListNode *dum = new ListNode(-1);
        ListNode *ptr = dum;
        while(h1 != nullptr && h2 != nullptr) {
            ptr->next = h2;
            ptr = ptr->next;
            h2 = h2->next;
            
            ptr->next = h1;
            ptr = ptr->next;
            h1 = h1->next;
        }
        if(h1 != nullptr) {
            ptr->next = h1;
        }
        if(h2 != nullptr) {
            ptr->next = h2;
        }
        head = dum->next;
    }
};