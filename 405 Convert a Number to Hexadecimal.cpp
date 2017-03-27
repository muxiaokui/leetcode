/*Author: JerryYan
  comment:把10进制转16进制，并不需要纠结补码问题其实。。。
*/
class Solution {
public:
    string toHex(int num) {
        string tp="0123456789abcdef";
        if(num==0)return "0";
        string ret="";
        int count=0;
        while(num && count<8){
            count++;
            ret=tp[(num&0xf)]+ret;
            num>>=4;
        }
        return ret;
    }
};
