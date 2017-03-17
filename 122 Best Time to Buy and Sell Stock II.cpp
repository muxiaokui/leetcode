/*Author: JerryYan
  comment:water
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret=0;
        if(prices.size() == 0)return 0;
        int now =prices[0];
        for(int n : prices){
            if(now<n){
             ret+=n-now;
             now = n;
            }
            else {
                now = n;
            }
        }
        return ret;
    }
};
