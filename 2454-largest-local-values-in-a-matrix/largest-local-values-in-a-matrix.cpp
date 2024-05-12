class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int i,j,n=grid.size(), m=grid[0].size();
        int p=0;
        vector<vector<int>>ans(n-2,vector<int>(n-2));
        for(i=0;i<n-2;i++){
            for(j=0;j<n-2;j++){
                int mx=INT_MIN;
                for(int k1=i;k1<i+3;k1++){
                    for(int k2=j;k2<j+3;k2++){
                        mx=max(mx,grid[k1][k2]);
                    }
                }
             ans[i][j]=mx;
            }
        }
        return ans;
    }
};