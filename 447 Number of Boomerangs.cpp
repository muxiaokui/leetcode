/*Author: JerryYan

  comment:map ֻ��n^2��������һ��һ��Ƚ�
*/
class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int ret=0;
        for(int i=0;i<points.size();i++){
            map<int ,int>m;
            for(int j=0;j<points.size();j++){
                if(i==j)continue;
                m[  (points[i].first-points[j].first)*(points[i].first-points[j].first) + (points[i].second-points[j].second)*(points[i].second-points[j].second) ]++;
            }
             map<int,int>::iterator  iter;
             for(iter = m.begin();iter!=m.end();iter++){
                 ret+= (iter->second * (iter->second-1));
             }
        }
        return ret;
    }

};
