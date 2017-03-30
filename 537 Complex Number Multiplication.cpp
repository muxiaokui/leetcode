/*Author: JerryYan
   comment:字符串转为int，和int转为字符串
*/
/*人家的做法，我的相比麻烦好多- -
  string complexNumberMultiply(string a, string b) {
        int ra, ia, rb, ib;
        char buff;
        stringstream aa(a), bb(b);
        aa >> ra >> buff >> ia;
        bb >> rb >> buff >> ib;
        string ans = to_string(ra*rb - ia*ib)+"+";
        ans += to_string(ra*ib + rb*ia) + "i";
        return ans;
    }

*/

class Solution {
public:

    int getn(string a){
        int ret=0;bool flag = true;
        for(char n :a){
            if(n=='-'){
             flag= false;
             continue;
            }
            if(n!='+'){
                ret=ret*10;
                ret+=n-'0';
            }
            else{
                break;
            }
        }
        if(flag)
        return ret;
        return -ret;
    }
    int geti(string a){
        int ret=0;
        bool flag=true; 
        int i=0;
        for(;i<a.size();i++){
            if(a[i]=='+')
            break;
        }
        i++;
        for(;i<a.size();i++){
            if(a[i]=='-'){
             flag= false;
             continue;
            }
            if(a[i]!='i'){
                ret=ret*10;
                ret+=a[i]-'0';
            }
        }
        if(flag)
        return ret;
        return -ret;
    }

    string complexNumberMultiply(string a, string b) {
        int na = getn(a);
        int ia = geti(a);
        int nb = getn(b);
        int ib = geti(b);
        string ret="";
       
        ret= to_string(na*nb-ib*ia)+"+"+to_string(na*ib+ia*nb)+"i";
        return ret;
    }
};