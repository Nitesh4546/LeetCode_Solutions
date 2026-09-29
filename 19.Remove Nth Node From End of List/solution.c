/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int len = 0;
    struct ListNode *temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    int target = len - n ;

    if(target == 0){
        struct ListNode *newhead = head->next;
        return newhead;
    }

    struct ListNode *curr = head;
    for(int i=1;i<target;i++){
        curr = curr->next;
    }
    struct ListNode *del = curr->next;
    if(del !=NULL){
        curr->next = del->next;
    }
    return head;
}