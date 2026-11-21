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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp = head;
        if(head == nullptr || head->next == nullptr) {
            return head;
        }
        
        deque<int> dups;
        while(temp != nullptr && temp->next != nullptr) {
            if(temp->val == temp->next->val) {
                if(dups.empty() || dups.back() != temp->val) {
                    dups.push_back(temp->val);
                }
                ListNode *to = temp->next;
                temp->next = temp->next->next;
                delete to;
            } else {
                temp = temp->next;
            }
        }

        if(!dups.empty()) {
            ListNode *dum = new ListNode(-1);
            ListNode *ptr = dum;

            temp = head;
            while(temp != nullptr) { 
                if(!dups.empty() && temp->val == dups.front()) {
                    ListNode *toDelete = temp;
                    temp = temp->next;
                    delete toDelete;
                    
                    if(temp == nullptr || temp->val != dups.front()) {
                        dups.pop_front();
                    }
                } else {
                    ptr->next = temp;
                    ptr = ptr->next;
                    temp = temp->next;
                }
            }
            ptr->next = nullptr;
            head = dum->next;
        }
        return head;
    }
};