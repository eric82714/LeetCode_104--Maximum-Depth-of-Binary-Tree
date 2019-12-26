# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def maxDepth(self, root: TreeNode) -> int:    
        if not root: return 0
        else: 
            depth = 1
            return self.countDepth(root.left, root.right, depth)
        
    def countDepth(self, p, q, num):
        if not p and not q: return num
        elif p and not q:
            num += 1
            return self.countDepth(p.left, p.right, num)
        elif not p and q:
            num += 1
            return self.countDepth(q.left, q.right, num)
        else:
            num += 1
            return max(self.countDepth(p.left, p.right, num), self.countDepth(q.left, q.right, num))
