class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size();
        vector<int>oR(n,0),oC(m,0),zR(n,0),zC(m,0);
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==0){
                    zR[i]++; zC[j]++;
                }
                else{
                    oR[i]++; oC[j]++;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                grid[i][j]=oR[i]+oC[j]-zR[i]-zC[j];
            }
        }
        return grid;
    }
};