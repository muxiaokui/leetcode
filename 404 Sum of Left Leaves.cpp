/*Author: JerryYan
  comment:输出所有左叶子的和
  直接判断自己的左孩子是不是叶子，是的话加上，似乎自己是没办法判断自己是不是叶子的。。。
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root ==NULL)return 0;
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL){
            return root->left->val+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        }
        else return sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};
