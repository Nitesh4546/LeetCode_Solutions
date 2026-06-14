# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self, root, level):
        if not root:
            return 0
            
        left = self.helper(root.left,level+1)
        right = self.helper(root.right,level+1)
        return 1+max(left,right)
    def maxDepth(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: int
        """
        return self.helper(root,1)
        