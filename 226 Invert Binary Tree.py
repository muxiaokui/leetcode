/*Author: JerryYan
  comment:������������������Max Howell��ţû���������Ǹ�- -
   py�Ļ����໹���е�ֵֹģ�Ȼ��ע�⽻��ʱͬʱ�ģ���Ҫ�ֿ�д
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

