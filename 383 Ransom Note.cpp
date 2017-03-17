/*Author: JerryYan
  comment:unordered_map
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char ,int > m ;
        for(char a : magazine){
            m[a]++;
        }
        for(char a : ransomNote){
            m[a]--;
            if(m[a]<0)return false;
        }
        return true;
    }
};
