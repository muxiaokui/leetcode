/*Author: JerryYan
   comment:a��asc���棬A��ǰ�棬���ǲ��������ģ����˼���
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
