/*Author: JerryYan
  comment:water
*/
class Solution {
public:
    int titleToNumber(string s) {
        int ll = s.size();
        int ret=0;
        for(int i=0;i<ll;i++){
            ret =ret*26;
            ret+=(s[i]-'A'+1);
        }
        return ret;
    }
};
