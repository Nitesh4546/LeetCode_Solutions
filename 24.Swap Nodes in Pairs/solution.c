/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL || head->next==NULL) return head;
    struct ListNode* n1 = head;
    struct ListNode* n2 = head->next;
    int temp = n1->val;
    n1->val = n2->val;
    n2->val = temp;
    swapPairs(head->next->next);
    return head;
}