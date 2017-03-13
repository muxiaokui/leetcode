/*Author: JerryYan
  comment:water
  需要注意的是记得priority_queue的用法
  还有pair的second是不用()的。。。
  这个题目还可以再看看数据结构用法
*/

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        priority_queue<pair<int ,int > >pq;
        for(int i=0;i<nums.size();i++){
            pq.push(make_pair(nums[i],i));
        }
        vector<string> ret(nums.size(),"");
        for(int i=0;i<nums.size();i++){
            if(i == 0){
                ret[pq.top().second] = "Gold Medal";
            }
            else if(i == 1){
                ret[pq.top().second] = "Silver Medal";
            }
            else if(i == 2 ){
                 ret[pq.top().second] = "Bronze Medal";
            }
            else {
                ret[pq.top().second] = to_string(i+1);
            }
            pq.pop();
        }
        return ret;
    }
};
