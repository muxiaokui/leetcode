/*Author: JerryYan
  data:0308
  from:leetcode 412
  comment: ��Ŀ�ܼ򵥣��������漰�����������int��stringת��תȥ������
			Ŀǰ��֪���ģ�atoi�ܺ��ã�����itoaֻ��windows�����ƺ������������������Ǹ�to_string()
			��Ȼ��֪�������������ģ����Ǻܺ�ʹ������
			����linux��strtod���ֹ���Ķ�������ͷ��Ҫ�úù۲�һ��
*/



class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ret;
        string hehe;
        for(int i=1;i<=n;i++){
            if(i%15 == 0){
                ret.push_back("FizzBuzz");
            }
            else if(i%3 == 0)
            {
                ret.push_back("Fizz");
            }
            else if(i%5 == 0){
                ret.push_back("Buzz");
            }
            else{

                ret.push_back(to_string(i));
            }

        }
        return ret;
    }
};
