/*Author: JerryYan

  comment:大数加法
*/
class Solution {
public:
    string addStrings(string num1, string num2) {
        bool flag=false;
        string ans="";
        int n1 = num1.size()-1;
        int n2 = num2.size()-1;

        while(n1>=0 || n2>=0 || flag){
            int now=0;
            if(n1>=0){
                now+=num1[n1]-'0';
                n1--;
            }
            if(n2>=0){
                now+=num2[n2]-'0';
                n2--;
            }
            if(flag)now++;
            if(now>=10)now -=10,flag=true;
            else flag=false;

            ans+=(now+'0');
        }
        reverse(&ans[0],&ans[ans.size()]);
        return ans;
    }
};
