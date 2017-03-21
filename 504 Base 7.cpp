/*Author: JerryYan
  comment:water
*/
class Solution {
public:
    string convertToBase7(int num) {
        int ret =0;
        int now =1;
        bool f;
        if(num<0){
            num = -num;
            f= true;
        }
        else{
            f= false;
        }
        while(num){
            ret+=num%7*now;
            now= now*10;
            num=num/7;
        }
        if(f)ret=-ret;
        return to_string(ret);
    }
};
