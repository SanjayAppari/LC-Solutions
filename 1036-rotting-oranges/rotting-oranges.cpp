class Solution {
public:

    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size(),ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0}); vis[i][j]=2;
                }
            }
        }


        while(!q.empty()){
            auto p = q.front(); q.pop();
            int i=p.first.first, j=p.first.second, t=p.second;
            ans=max(ans,t);
            if(check(i-1,j,n,m) && grid[i-1][j]==1 && vis[i-1][j]==0) {
                    vis[i-1][j]=2; q.push({{i-1,j},t+1});
            } 
            if(check(i,j+1,n,m) && grid[i][j+1]==1 && vis[i][j+1]==0) {
                    vis[i][j+1]=2; q.push({{i,j+1},t+1});
            } 

            if(check(i+1,j,n,m) && grid[i+1][j]==1 && vis[i+1][j]==0) {
                    vis[i+1][j]=2; q.push({{i+1,j},t+1});
            } 
            if(check(i,j-1,n,m) && grid[i][j-1]==1 && vis[i][j-1]==0) {
                    vis[i][j-1]=2; q.push({{i,j-1},t+1});
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++) if(grid[i][j]==1 && vis[i][j]!=2) return -1;
        }

        return ans;
    }
};