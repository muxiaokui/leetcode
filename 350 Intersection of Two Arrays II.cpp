/*Author: JerryYan
  comment:water
*/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        vector <int>ret;
        for(int a:nums1 ){
            m[a]++;
        }
        for(int a:nums2){
            if(m[a]>0){
                m[a]--;
                ret.push_back(a);
            }
        }
        return ret;
    }
};
