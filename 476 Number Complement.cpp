/*Author: JerryYan
  data:0307
  from:leetcode 476
  comment:��һ�����Ĳ���������ֻ�ǲ�����ߵ�1λ����
  �������ڿ������һ����������λ����ͬ�����Ƕ���1���߶���0����
  ��Ȼ����һ��ȫ1������Ȼ��ͣ����ֱ�����涼��0����ȡ���ͺ���
   ����ֱ���ֻ�
*/
class Solution {
public:
    int findComplement(int num) {
        int tmp = ~0u >> 1;
        while(num & tmp ) tmp = tmp<<1;
        return ~tmp ^ num ;
    }
};
