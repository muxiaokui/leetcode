/*Author: JerryYan
  comment:��ʼ������1���ڶ�����11����������21��Ȼ����1211������
  ����n,���n�������Ƕ���
  
  תstringֱ������ÿ�α�һ�µ�ǰ��֮ǰ�Ƿ�һ������һ������һ�µ�ǰ��һ��ֱ����һ����
  �ǵ��������һ�Σ���Ϊ����û���㡣
*/
class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        string ret;
        n--;
        while(n--){
            ret = "";
            int nn =1;
            int tmp =1;
            while(tmp!=s.size()){
                if(s[tmp]!=s[tmp-1]){
                    ret+=to_string(nn);
                    ret+=s[tmp-1];
                    nn=1;
                }
                else{
                    nn++;
                }
                tmp++;
            }
           ret+=to_string(nn);
           ret+=s[tmp-1];
            s= ret;
        }
        return s;
    }
};