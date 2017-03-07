/*Author: JerryYan
  data:0307
  from:leetcode 476
  comment:求一个数的补数，不过只是补到最高的1位。。
  问题在于快速求出一个和所给数位数相同，但是都是1或者都是0的数
  显然先找一个全1出来，然后不停左移直到后面都是0，再取反就好了
   后面直接抑或
*/
class Solution {
public:
    int findComplement(int num) {
        int tmp = ~0u >> 1;
        while(num & tmp ) tmp = tmp<<1;
        return ~tmp ^ num ;
    }
};
