/*Author: JerryYan
   comment:a在asc后面，A在前面，但是不是连续的，隔了几个
*/
class Solution {
public:
    int longestPalindrome(string s) {
        int n[58]={0};
        for(char a: s )
        n[a-'A']++;
        int ans =0;
        bool hav = false;
        for(int i=0;i<58;i++){
            if(n[i]%2==1 && !hav){
                hav=true;
                ans++;
            }
            ans+=n[i]/2*2;
        }
        return ans;
    }
};
