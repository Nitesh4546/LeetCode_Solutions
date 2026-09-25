# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def helper(self, root, curr, target, res, currp):
        if not root:
            return []
        curr+= root.val
        currp.append(root.val)
        if not root.left and not root.right and curr==target:
            # return res
            res.append(currp[:])
        
        self.helper(root.left,curr,target,res,currp)
        self.helper(root.right,curr,target,res,currp)
        currp.pop()
        # return res
        
        
    def pathSum(self, root, targetSum):
        """
        :type root: Optional[TreeNode]
        :type targetSum: int
        :rtype: List[List[int]]
        """
        # currp = []
        res = []
        self.helper(root,0,targetSum,res,[])
        return res
        