class Solution {
public:
    void dfs(int node,int parent,vector<int> adj[],vector<int>&vis,int t[],int low[],vector<vector<int>>&bridges,int &timer){
        vis[node]=1;
        t[node]=low[node]=timer; timer++;
        for(auto i:adj[node]){
            if(i==parent) continue;
            if(!vis[i]){
                dfs(i,node,adj,vis,t,low,bridges,timer);
                low[node]=min(low[node],low[i]);
                if(low[i] > t[node]) bridges.push_back({i,node});
            }
            else{
                low[node]=min(low[node],low[i]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adj[n];
        for(auto i:connections){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0);
        int t[n],low[n],timer=0;
        vector<vector<int>>bridges;
        dfs(0,-1,adj,vis,t,low,bridges,timer);
        return bridges;
    }
};
