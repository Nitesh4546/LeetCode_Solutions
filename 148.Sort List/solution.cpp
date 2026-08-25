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
    ListNode* merge(ListNode* h1, ListNode* h2) {
        ListNode *dum = new ListNode(-1);
        
        ListNode *ptr = dum;
        ListNode *ptr1 = h1;
        ListNode *ptr2 = h2;

         while(ptr1 != nullptr && ptr2 != nullptr) {
            if(ptr1->val <= ptr2->val) {
                ptr->next = ptr1;
                ptr1 = ptr1->next; 
            } else {
                ptr->next = ptr2;
                ptr2 = ptr2->next; 
            }
            ptr = ptr->next; 
        }

        if(ptr1 != nullptr) {
            ptr->next = ptr1;
        }
        if(ptr2 != nullptr) {
            ptr->next = ptr2;
        }
        return dum->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr; 
        
        while (fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        prev->next = nullptr;
        
        ListNode* left_sorted = sortList(head);
        ListNode* right_sorted = sortList(slow);
        
        return merge(left_sorted, right_sorted);
    }
};