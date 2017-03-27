/*Author: JerryYan
  comment:set
  */
class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        s.clear();
        int now;
        while(n!=1){
                if(s.count(n)==0)s.insert(n);
                else return false;
                now =0;
                while(n){
                    int t= n%10;
                    n=n/10;
                    now+=t*t;
            }
            n=now;
        }
        return true;
    }
};
