/*Author: JerryYan
  comment:���üӺŵļӷ�
  Ҫ֪���ֻ����û�н�λ�ļӷ���Ȼ����&������еĽ�λ
  ÿ�ν�λǰ��
*/

class Solution {
public:
    int getSum(int a, int b) {
        int c,d;
        while(b){
            c = (a^b);
            d = ((a&b)<<1);
            a = c ;
            b = d ;
        }
        return c;
    }
};
