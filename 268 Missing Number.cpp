/*Author: JerryYan

  comment:˵���������0��n���и������ˣ����Ǹ���
  �˼Ҷ�����xor���ģ����Ǵ�0��n��xorһ�飬��xor������ÿ����
  ��ֱ�����Ȼ����ġ�����
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = nums.size()*(nums.size()+1)/2;
        for(int a:nums)ans-=a;
        return ans;
    }
};
