/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *a = list1;
    struct ListNode *b = list2;
    struct ListNode *dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next = NULL;
    struct ListNode *temp = dummy;

    while(a!=NULL && b!=NULL){
        if(a->val<b->val){
            temp->next = a;
            a = a->next;
        }else{
            temp->next = b;
            b = b->next;
        }
        temp = temp->next;
    }
    if(a !=NULL){
        temp->next = a;
    }else{
        temp->next = b;
    }
    return dummy->next;
}