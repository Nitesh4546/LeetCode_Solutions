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
    ListNode* mid(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    int pairSum(ListNode* head) {
        ListNode* midd = mid(head);
        ListNode* prev = nullptr;
        ListNode* curr = midd;
        ListNode* next = nullptr;
        
        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        
        int max_ = 0;
        
        while (head != nullptr && prev != nullptr) {
            int sum = head->val + prev->val;
            max_ = max(max_, sum);
            head = head->next;
            prev = prev->next;
        }
        
        return max_;
    }
};