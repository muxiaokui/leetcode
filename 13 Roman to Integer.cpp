/*Author: JerryYan
  comment:把罗马数字转化成阿拉伯数字
          罗马数字不是很懂人家怎么构造的，构造起来比较诡异
          反正求得时候倒是简单，就是如果一个数比它右边大，那就加，否则就减。最后一个数永远是加

          但是要是给个阿拉伯，换成罗马数字，这就很恶心了。。。
*/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> T={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ret= 0;
        ret += T[s[s.length()-1]];
        for(int i=0;i<s.length()-1;i++){
            if(T[s[i]]<T[s[i+1]])ret-=T[s[i]];
            else ret+=T[s[i]];
        }
        return ret;
    }
};
