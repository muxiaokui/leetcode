/*Author: JerryYan

  comment:说给个数组从0到n，有个数丢了，问是个嘛
  人家都是用xor做的，就是从0到n先xor一遍，再xor了数组每个数
  我直接求和然后减的、、、
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size()*(nums.size()+1)/2;
        for(int a:nums)ans-=a;
        return ans;
    }
};
