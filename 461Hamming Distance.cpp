/*Author: JerryYan
  data:0307
  from:leetcode 461
  comment:�����ֵĺ��ܶپ��룬ֱ���ֻ����1�������ͺ�
   ��1�������õ�����ѧ���һ�����ɣ���ͬ&�����1��ÿ�ζ���ɵ�һ��1
*/

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int ans =0;
        while (z){
            z = z& (z-1);
            ans++;
        }
        return ans;
    }
};
