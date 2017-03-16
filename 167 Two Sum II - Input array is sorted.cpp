/*Author: JerryYan
  comment:��һ������������������������Ϊ�ض���
  һ������һ�����ң�ɨһ��ͺ���
  vector<int> V({1,2,3});
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0,r = numbers.size()-1;
        while(numbers[l] + numbers[r] != target){
            if(numbers[l] + numbers[r] < target)l++;
            else r--;
        }
       vector<int> ret({l+1,r+1});
       return ret;
    }
};
