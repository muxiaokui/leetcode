/*Author: JerryYan
  data:0308
  from:leetcode 496
  comment: 好吧这题做坏掉了，因为看错题目了，
		   题目是说让你按顺序找左边的数字在右边出现时，他右边第一个比他大的数字
		   找第一个比它大的数字很简单，直接用一个栈搞一搞就好了。
		   然后找到之后要存起来，这里学会了unordered_map！强，吹，无敌！
		   无序map，实现方法却是利用hash，只要o(1)的复杂度！
		   操作起来倒是没啥，还是那些操作
		   http://classfoo.com/ccby/article/S3XoG
		   然后就没了。。
		   所以这题我是基本照抄了别人的...
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
