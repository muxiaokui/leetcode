/*Author: JerryYan
  comment:water
*/
class Solution {
public:
    string reverseString(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;j--;
        }
        return s;
    }
};
