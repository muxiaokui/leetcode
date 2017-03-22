/*Author: JerryYan
   comment:water
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m;
        for(char a : s)m[a]++;
        for(char a: t)m[a]--;
        for(auto a: m)
        if(a.second)return false;
        return true;
    }
};
