# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def mir(self, node1,node2):
        if not node1 and not node2:
            return True
        if not node1 or not node2:
            return False
        return (node1.val==node2.val) and self.mir(node1.left, node2.right) and self.mir(node1.right,node2.left)
    def isSymmetric(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: bool
        """
        if not root:
            return True
        return self.mir(root.left, root.right)
        