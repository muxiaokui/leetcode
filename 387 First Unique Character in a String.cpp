/*Author: JerryYan
  comment:unordered_map
*/
class Solution {
public:
    int firstUniqChar(string s) {
        if(s.size()==0)return -1;
        unordered_map <char,int> m;
        for(char a : s){
            m[a]++;
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1)return i;
        }
        return -1;
    }
};
