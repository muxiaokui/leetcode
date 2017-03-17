/*Author: JerryYan
  comment:���������Ҷ�ӵĺ�
  ֱ���ж��Լ��������ǲ���Ҷ�ӣ��ǵĻ����ϣ��ƺ��Լ���û�취�ж��Լ��ǲ���Ҷ�ӵġ�����
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
