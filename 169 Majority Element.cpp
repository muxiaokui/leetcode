/*Author: JerryYan
   comment:Moore Voting Algorithm
   有点意思，给一个数组长度n，数组中有一个数出现了n/2以上次，求这个数

   这个算法就是每次把两个不同的数删掉，直到最后剩下的，必定是半数以上的，半数以上永远不会被完全删掉
   做的时候没想到
   */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int now =0;
        int tmp=0;
        for(int i=0;i<nums.size();i++){
            if(now == 0){
                tmp = nums[i];
                now++;
            }
            else {
                if(tmp == nums[i])now++;
                else now --;
            }

        }
        return tmp;
    }
};
