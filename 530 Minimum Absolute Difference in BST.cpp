/*Author: JerryYan
  comment:题目没仔细看，是个BST，就是二项搜索树，这树有特点的，按照中序遍历出来就是从小到大
  也就是左子都比根小，右子都比跟大
  所以这题就是个按中序遍历
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
