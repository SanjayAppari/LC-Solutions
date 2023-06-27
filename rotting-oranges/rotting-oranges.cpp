class Solution {
public:

    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int i,j,n=grid.size(),m=grid[0].size();
        int v[n][m];
        queue<pair<pair<int,int>,int>>q;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
             if(grid[i][j]==2){ q.push({{i,j},0}); v[i][j]=2;}
                else v[i][j]=0;
            }
        }
        int ans=0;
        while(!q.empty()){
            int i=q.front().first.first;
            int j=q.front().first.second;
            int t=q.front().second;
            ans=max(ans,t);
            cout<<t<<" ";
            q.pop();
            if(check(i,j-1,n,m) && v[i][j-1]==0 && grid[i][j-1]==1){
                q.push({{i,j-1},t+1});
                v[i][j-1]=2;
            }
            if(check(i,j+1,n,m) && v[i][j+1]==0 && grid[i][j+1]==1){
                q.push({{i,j+1},t+1}); 
                v[i][j+1]=2;
            }
            if(check(i-1,j,n,m) && v[i-1][j]==0 && grid[i-1][j]==1){
                q.push({{i-1,j},t+1});
                v[i-1][j]=2;
            }
            if(check(i+1,j,n,m) && v[i+1][j]==0 && grid[i+1][j]==1){
                q.push({{i+1,j},t+1});
                v[i+1][j]=2;
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                // cout<<v[i][j]<<" ";
                if(grid[i][j]==1 && v[i][j]!=2) return -1;
            }cout<<endl;
        }
        return ans;
    }
};