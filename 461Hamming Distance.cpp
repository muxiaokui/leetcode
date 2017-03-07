/*Author: JerryYan
  data:0307
  from:leetcode 461
  comment:求数字的汉密顿距离，直接抑或后求1的数量就好
   求1的数量用的是新学会的一个技巧，不同&自身减1，每次都会干掉一个1
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int ans =0;
        while (z){
            z = z& (z-1);
            ans++;
        }
        return ans;
    }
};
