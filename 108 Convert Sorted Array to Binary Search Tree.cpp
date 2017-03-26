/*Author: JerryYan

  comment:构建二叉查找树，就是中序排列就是递增序列那个玩意
  分治即可，注意l,r的范围，r是永远达不到的
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
    TreeNode* gao(vector<int>& nums, int l,int r){
        if(l>=r)return NULL;
        int mid = (l+r)/2;
        TreeNode* now = new TreeNode(nums[mid]);
        now->left = gao(nums,l,mid);
        now->right = gao(nums,mid+1,r);
        return now;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return gao(nums,0,nums.size());
    }
};
