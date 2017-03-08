/*Author: JerryYan
  data:0308
  from:leetcode 500
  comment: 问字符串是不是都是由键盘上同一行构成的
           无耻的java有match...一行就解决了，C++俺不知道有没有，所以只能老老实实写
           无耻的把字符串长度都变成了10，处理起来很爽，分别给个1,2,4只要|起来不冲突就好
           感觉写这玩意写的对vector非常亲切- -
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
