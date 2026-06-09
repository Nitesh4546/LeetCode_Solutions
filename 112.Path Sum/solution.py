# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def hasPathSum(self, root, targetSum):
        """
        :type root: Optional[TreeNode]
        :type targetSum: int
        :rtype: bool
        """
        def helper(root,curr):
            #empty tree check
            if not root: return False
            curr+=root.val
            #current not is leaf or not check
            if not root.left and not root.right: return targetSum==curr
            return helper(root.left,curr) or helper(root.right,curr)
        return helper(root,0)