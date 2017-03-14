/*Author: JerryYan
  data:0308
  from:leetcode 485
  comment: water
*/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ret = 0;
        int now = 0;
        int ll = nums.size();
        for(int i=0;i<ll;i++){
            if(nums[i] == 0){
                ret = max(ret,now);
                now = 0;
            }
            else{
                now++;
            }
        }
        return max(ret,now);
    }
};
