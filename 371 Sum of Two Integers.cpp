/*Author: JerryYan
  comment:不用加号的加法
  要知道抑或就是没有进位的加法，然后用&算出所有的进位
  每次进位前移
*/

class Solution {
public:
    int getSum(int a, int b) {
        int c,d;
        while(b){
            c = (a^b);
            d = ((a&b)<<1);
            a = c ;
            b = d ;
        }
        return c;
    }
};
