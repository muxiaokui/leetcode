/*Author: JerryYan
  comment:��Ŀû��ϸ�����Ǹ�BST�����Ƕ������������������ص�ģ�������������������Ǵ�С����
  Ҳ�������Ӷ��ȸ�С�����Ӷ��ȸ���
  ����������Ǹ����������
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
    int getMinimumDifference(TreeNode* root) {
        long ret = INT_MAX;
        TreeNode* pre = NULL;
        find(root,pre,ret);
        return ret;
    }
private:
    void find(TreeNode* now ,TreeNode* &pre,long &ret ){
        if(now ->left != NULL){
             find(now->left, pre, ret);
        }
        if (pre != NULL){
            ret = std::min(ret, (long)abs(now->val - pre->val));
        }
        pre = now;
        if(now->right!=NULL){
            find (now->right,pre,ret);
        }
    }
};
