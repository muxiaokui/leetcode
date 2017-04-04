/*Author: JerryYan
  comment:初始序列是1，第二个是11，第三个是21，然后是1211。。。
  给个n,求第n个序列是多少
  
  转string直接做，每次比一下当前和之前是否一样，不一样处理一下当前，一样直接下一个。
  记得最后再算一次，因为最后的没有算。
*/
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        string ret;
        n--;
        while(n--){
            ret = "";
            int nn =1;
            int tmp =1;
            while(tmp!=s.size()){
                if(s[tmp]!=s[tmp-1]){
                    ret+=to_string(nn);
                    ret+=s[tmp-1];
                    nn=1;
                }
                else{
                    nn++;
                }
                tmp++;
            }
           ret+=to_string(nn);
           ret+=s[tmp-1];
            s= ret;
        }
        return s;
    }
};