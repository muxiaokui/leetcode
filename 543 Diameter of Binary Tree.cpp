/*Author: JerryYan

  comment:DFS ������ǵ�һ����Ҫ����д����������Ŀ...
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
    int ret =0;

    int gao(TreeNode* now){
        if(now == NULL)return 0;
        int ll = gao(now->left);
        int rr = gao(now->right);
        ret =ret>ll+rr?ret:ll+rr;
        return max(ll,rr)+1;

    }

    int diameterOfBinaryTree(TreeNode* root) {
        gao(root);
        return ret;
    }
};
