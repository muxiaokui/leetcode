/*Author: JerryYan
  comment:all except one +1 == one - 1
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mi = INT_MAX;
        for(int n:nums)
        if(n<mi)mi = n;
        int ret =0;
        for(int n: nums){
            ret +=n-mi;
        }
        return ret;
    }
};
