class Solution {
public:

    void dfs(int node,vector<int>adj[],vector<int>&vis ){
        vis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i]) dfs(i,adj,vis);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<int>adj[n];
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j) adj[i].push_back(j);
            }
        }
        int ans=0;
        vector<int>vis(n,0);
        for(i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                ans++;
            }
        }
        return ans;
    }
};