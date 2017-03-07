/*Author: JerryYan
  data:0307
  from:leetcode 476
  comment:�������������ǰ��һ�������һ�����ֵ�λ��
           ����Ȼ���֣�Ȼ���������������ʵ�ܼ򵥣�����������Ļ���ֻ�е�ǰ����ָ����С������l+1�����򶼶��Ҿͺ�
           �����ҵĻ���ֻ�е�ǰ����ָ�����󣬾���r-1�����򶼶���
           ������ǣ���������һЩ��Сֻ��2�����飬���Ժܿ��ܶ�������Ȼ���д�СΪ0�����飬�������˺ܶ���ֵ��Ż�����Ҳ�ܾ���
           �����д�ĺ�һ�㣬�϶��и���������д�������������ĸ���
*/


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret;
        ret.clear();
        int ans;
        int len = nums.size();
        if(len == 0){
            ret.push_back(-1);
            ret.push_back(-1);
            return ret;

        }
        int l = 0,r=len-1;
        while(l<r){
            int tmp = (l+r)/2;
            if(tmp == l)break;
            if(nums[tmp]<target)l= tmp+1;
            else r=tmp;
        }
        if(l>=0 && nums[l]==target)ret.push_back(l);
        else {
            if(r>=0 && nums[r]==target)
                ret.push_back(r);
            else{
                 ret.push_back(-1);
                 ret.push_back(-1);
                  return ret;
            }
             }

        l = 0,r=len-1;
        while(l<r){
            int tmp = (l+r)/2;
            if(tmp == l)break;
            if(nums[tmp]>target)r= tmp-1;
            else l =tmp;
        }
        if(r>=0 && nums[r]==target)
        ret.push_back(r);
        else
        ret.push_back(l);


        return ret;
    }
};
