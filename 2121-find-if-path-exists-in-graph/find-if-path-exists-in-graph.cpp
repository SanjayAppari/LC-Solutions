class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int i,j;
        vector<int>adj[n+1];
        for(i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n+1,0);
        queue<int>q;
        vis[source]=1; q.push(source);
        while(!q.empty()){
            int x=q.front(); q.pop();
            if(x==destination) return 1;
            for(auto i:adj[x]){
                if(vis[i]==0){
                    vis[i]=1; q.push(i);
                }
            }
        }
        return 0;
    }
};