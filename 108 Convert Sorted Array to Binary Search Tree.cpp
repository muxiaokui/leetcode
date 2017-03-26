/*Author: JerryYan

  comment:��������������������������о��ǵ��������Ǹ�����
  ���μ��ɣ�ע��l,r�ķ�Χ��r����Զ�ﲻ����
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
