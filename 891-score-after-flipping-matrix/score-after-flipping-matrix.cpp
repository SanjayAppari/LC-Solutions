class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size(),ans=0;
        for(i=0;i<n;i++){
            if(grid[i][0]==0){
                for(j=0;j<m;j++){
                    if(grid[i][j]==0) grid[i][j]=1;
                    else grid[i][j]=0;
                }
            }
        }
        for(i=0;i<m;i++){
            int c=0;
            for(j=0;j<n;j++){
                if(grid[j][i]) c++;
            }
            if(c<=(n/2)){
                for(j=0;j<n;j++){
                    if(grid[j][i]) grid[j][i]=0;
                    else grid[j][i]=1;
                }
            }
        }
        ans=0;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                // cout<<grid[i][j]<<" ";
                if(grid[i][j])
                ans+= pow(2,m-1-j);
            }
        }
        return ans;
    }
};