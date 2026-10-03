/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *curr = head;
    struct ListNode *temp = NULL;
    struct ListNode *prev = NULL;
    while(curr != NULL){
        temp = curr->next;
        curr->next = prev;

        prev = curr;
        curr = temp;
    }
    // head = prev;
    return prev;
}