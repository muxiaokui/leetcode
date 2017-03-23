/*Author: JerryYan
  comment:����������ת���ɰ���������
          �������ֲ��Ǻܶ��˼���ô����ģ����������ȽϹ���
          �������ʱ���Ǽ򵥣��������һ���������ұߴ��Ǿͼӣ�����ͼ������һ������Զ�Ǽ�

          ����Ҫ�Ǹ����������������������֣���ͺܶ����ˡ�����
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
