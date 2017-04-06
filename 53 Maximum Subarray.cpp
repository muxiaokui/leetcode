/*Author: JerryYan
   comment:water
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int now =0;
        int ret=-2147483647;
        for(int a : nums){
            now+=a;
            ret = max(ret,now);
            if(now<0)now=0;
            
        }
        return ret;
    }
};