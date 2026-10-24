# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: Optional[ListNode]
        :type k: int
        :rtype: Optional[ListNode]
        """
        if not head or not head.next or k == 0:
            return head
        
        last = head
        length = 1
        while last.next:
            last = last.next
            length += 1
        
        k = k % length
        if k == 0:
            return head
        
        last.next = head
        
        tail = length - k
        new = head
        for _ in range(tail - 1):
            new = new.next
            
        new_head = new.next
        new.next = None
        
        return new_head