/*Author: JerryYan
  data:0308
  from:leetcode 412
  comment: 题目很简单，但是又涉及到我最讨厌的int和string转来转去的问题
			目前我知道的，atoi很好用，但是itoa只在windows下有似乎，不过可以用下面那个to_string()
			虽然不知道这玩意哪来的，但是很好使。。。
			另外linux有strtod这种诡异的东西，回头我要好好观察一下
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
