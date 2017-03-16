/*Author: JerryYan
  comment:for(char a : s )
*/
class Solution {
public:
    char findTheDifference(string s, string t) {
        int suma=0,sumb=0;
        for(char a : s){
            suma+=(int)a;
        }
        for(char a : t){
            sumb+=(int)a;
        }
        return (char)(sumb-suma);
    }
};
