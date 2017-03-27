/*Author: JerryYan

  comment:water
*/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a = 1<<31;
        return n>0 && (a%n==0) ;
    }
};
