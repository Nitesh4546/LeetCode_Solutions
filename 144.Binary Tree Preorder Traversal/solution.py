# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):

    def helper(self, root, path):
        if not root:
            return
        path.append(root.val)
        self.helper(root.left,path)
        self.helper(root.right,path)
        return path
    def preorderTraversal(self, root):
        """
        :type root: Optional[TreeNode]
        :rtype: List[int]
        """
        res = []
        self.helper(root, res)
        return res
        