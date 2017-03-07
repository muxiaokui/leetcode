/*Author: JerryYan
  data:0307
  from:leetcode 476
  comment:求数组里面的最前面一个和最后一个出现的位置
           很显然二分，然后求最左和最右其实很简单，就是求最左的话，只有当前数比指定数小，就让l+1，否则都动右就好
           求最右的话，只有当前数比指定数大，就让r-1，否则都动左
           讨厌的是，样例里有一些大小只有2的数组，所以很可能都不动，然后还有大小为0的数组，所以做了很多奇怪的优化，我也很绝望
           这代码写的很一般，肯定有更加优美的写法。但是我懒的改了
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
