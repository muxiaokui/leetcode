/*Author: JerryYan
  comment:water就是每隔k个交换k个的顺序，如果不足k个，有几个算几个
*/
class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i = 0; i<s.size(); i+=2*k){
            for(int j=i,jj=min(j+k-1,(int)s.size()-1);j<jj;j++,jj-- ){
                swap(s[j],s[jj]);
            }
        }
        return s;
    }
};
