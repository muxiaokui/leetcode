/*Author: JerryYan
  comment:water����ÿ��k������k����˳���������k�����м����㼸��
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
