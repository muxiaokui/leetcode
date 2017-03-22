/*Author: JerryYan
   comment:Moore Voting Algorithm
   �е���˼����һ�����鳤��n����������һ����������n/2���ϴΣ��������

   ����㷨����ÿ�ΰ�������ͬ����ɾ����ֱ�����ʣ�µģ��ض��ǰ������ϵģ�����������Զ���ᱻ��ȫɾ��
   ����ʱ��û�뵽
   */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int now =0;
        int tmp=0;
        for(int i=0;i<nums.size();i++){
            if(now == 0){
                tmp = nums[i];
                now++;
            }
            else {
                if(tmp == nums[i])now++;
                else now --;
            }

        }
        return tmp;
    }
};
