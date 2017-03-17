/*Author: JerryYan
  comment:unordered_set
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ret;
        unordered_set<int> s(nums1.begin(),nums1.end());
        for(int n: nums2){
            if(s.count(n)){
                ret.push_back(n);
                s.erase(n);
            }
        }
        return ret;
    }
};
