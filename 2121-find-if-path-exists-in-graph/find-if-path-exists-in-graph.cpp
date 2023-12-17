class Solution {
public:

    bool dfs(int node,vector<int>adj[],vector<int>&vis,int t){
        cout<<node<<" ";
        if(node==t) return 1;
        vis[node]=1;
        for(auto i:adj[node]){
            if(!vis[i]){
                if(dfs(i,adj,vis,t)) return 1;
            }
        }
        return 0;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>adj[n+1];
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0);
        return dfs(source,adj,vis,destination);
    }
};