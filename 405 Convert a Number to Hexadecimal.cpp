/*Author: JerryYan
  comment:��10����ת16���ƣ�������Ҫ���Ჹ��������ʵ������
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
