/*Author: JerryYan
  comment:交换左右子树，就是Max Howell大牛没做出来的那个- -
   py的话，类还是有点怪怪的，然后注意交换时同时的，不要分开写
*/

# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution(object):
    def invertTree(self, root):
        if root :
           root.left,root.right = self.invertTree(root.right),self.invertTree(root.left)
        return root

