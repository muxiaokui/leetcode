/*Author: JerryYan
  data:0308
  from:leetcode 496
  comment: �ð������������ˣ���Ϊ������Ŀ�ˣ�
		   ��Ŀ��˵���㰴˳������ߵ��������ұ߳���ʱ�����ұߵ�һ�������������
		   �ҵ�һ������������ֺܼ򵥣�ֱ����һ��ջ��һ��ͺ��ˡ�
		   Ȼ���ҵ�֮��Ҫ������������ѧ����unordered_map��ǿ�������޵У�
		   ����map��ʵ�ַ���ȴ������hash��ֻҪo(1)�ĸ��Ӷȣ�
		   ������������ûɶ��������Щ����
		   http://classfoo.com/ccby/article/S3XoG
		   Ȼ���û�ˡ���
		   �����������ǻ����ճ��˱��˵�...
*/

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack <int> s;
        unordered_map<int ,int >m;
        int nn = nums.size();
        for(int n:nums){
            while(s.size() && s.top() < n ){
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for(int n: findNums)ans.push_back(m.find(n)!=m.end()?m[n]:-1);
        return ans;
    }
};
