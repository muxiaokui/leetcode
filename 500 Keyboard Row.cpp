/*Author: JerryYan
  data:0308
  from:leetcode 500
  comment: ���ַ����ǲ��Ƕ����ɼ�����ͬһ�й��ɵ�
           �޳ܵ�java��match...һ�оͽ���ˣ�C++����֪����û�У�����ֻ������ʵʵд
           �޳ܵİ��ַ������ȶ������10������������ˬ���ֱ����1,2,4ֻҪ|��������ͻ�ͺ�
           �о�д������д�Ķ�vector�ǳ�����- -
*/


class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int size = words.size();
        vector<string> ret;
        for(int t=0;t<size;t++){
            string now = words[t];
            string a = "qwertyuiop";
            string b = "asdfghjkll";
            string c = "zxcvbnmmmm";
            int s = now.length();
            int bel = 0;
            for(int i=0;i<s;i++){
                for(int j=0;j<10;j++){
                    if(now[i] == a[j])bel = bel | 1;
                    if(now[i] == b[j])bel = bel | 2;
                    if(now[i] == c[j])bel = bel | 4;

                }
                if(bel!=0 && bel !=1 && bel !=2 && bel!=4)
                break;

            }
            if(bel ==1 || bel ==2 || bel==4){
                ret.push_back(now);
            }


        }
        return ret;
    }
};
