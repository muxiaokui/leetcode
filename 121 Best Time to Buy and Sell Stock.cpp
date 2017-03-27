/*Author: JerryYan
  comment:water
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ret=0;
        if(prices.size()==0)return 0;
        int now = prices[0];
        for(int a:prices){
            if(a>=now){
                ret>(a-now)?:ret=(a-now);
            }else{
                now =a ;
            }
        }
        return ret;
    }
};
