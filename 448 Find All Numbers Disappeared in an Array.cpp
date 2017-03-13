/*Author: JerryYan
  comment:求一个长度为n的数组中没有出现的1~n中的所有数字
  不利用多余的空间，所以必须在原始数组上做文章，不动数值，最好的办法就是搞个负数当标记记录是否出现过
  于是这题就出来了，访问到的值所代表的数组位置标位负数。
  值得一提的是说明了长度为n，不为n的话这么搞小心爆空间
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int ll = nums.size();
        for(int node : nums){
            int tmp = node<0?-node:node;
            tmp--;
            if(nums[tmp]>0)nums[tmp] = 0-nums[tmp];
        }
        vector <int> ret;
        for(int i=0;i<ll;i++){
            if(nums[i]>0)ret.push_back(i+1);
        }
        return ret;
    }
};
