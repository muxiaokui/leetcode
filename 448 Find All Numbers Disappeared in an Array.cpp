/*Author: JerryYan
  comment:��һ������Ϊn��������û�г��ֵ�1~n�е���������
  �����ö���Ŀռ䣬���Ա�����ԭʼ�����������£�������ֵ����õİ취���Ǹ����������Ǽ�¼�Ƿ���ֹ�
  ��������ͳ����ˣ����ʵ���ֵ�����������λ�ñ�λ������
  ֵ��һ�����˵���˳���Ϊn����Ϊn�Ļ���ô��С�ı��ռ�
*/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int ll = nums.size();
        for(int node : nums){
            int tmp = node<0?-node:node;
            tmp--;
            if(nums[tmp]>0)nums[tmp] = 0-nums[tmp];
        }
        vector <int> ret;
        for(int i=0;i<ll;i++){
            if(nums[i]>0)ret.push_back(i+1);
        }
        return ret;
    }
};
