class Solution {
public:

    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }
    void dfs(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&v){
        if(v[i][j]==0 && grid[i][j]=='1'){
            v[i][j]=1;
            int n=grid.size(),m=grid[0].size();
            if(check(i-1,j,n,m)) dfs(i-1,j,grid,v);
            if(check(i,j-1,n,m)) dfs(i,j-1,grid,v);
            if(check(i,j+1,n,m)) dfs(i,j+1,grid,v);
            if(check(i+1,j,n,m)) dfs(i+1,j,grid,v);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size();
        int ans=0;
        vector<vector<int>>v(n,vector<int>(m,0));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(v[i][j]==0 && grid[i][j]=='1'){
                    ans++; dfs(i,j,grid,v);
                }
            }
        }
        return ans;
    }
};