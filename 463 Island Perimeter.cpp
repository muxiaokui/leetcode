/*Author: JerryYan
  data:0308
  from:leetcode 463
  comment: �����ܳ�
           ����Ȼ��ÿ��1����ΧֻҪ��1��0���߷Ƿ�����ϲ��1
           Ӧ�û���д�ĸ�����Щ��
*/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ret = 0;
        int l = grid.size();
        for(int i=0;i<l;i++){
            int r = grid[i].size();
            for(int j=0;j<r;j++){
                if(grid[i][j] == 1){
                    if(i==0 || grid[i-1][j] == 0)ret++;
                    if(i==l-1 || grid[i+1][j] == 0 )ret++;
                    if(j==0 || grid[i][j-1] == 0 )ret++;
                    if(j==r-1 || grid[i][j+1] == 0)ret++;
                    }
                }
            }
            return ret;
        }

};
