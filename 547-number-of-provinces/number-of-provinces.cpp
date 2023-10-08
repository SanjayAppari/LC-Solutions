class Solution {
public:

    void bfs(vector<int>adj[],vector<int>&v,int s){
        queue<int>q;
        v[s]=1; q.push(s);
        while(!q.empty()){
            int x=q.front(); q.pop();
            for(auto i:adj[x]){
                if(v[i]==0){
                    v[i]=1; q.push(i);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(),i,j;
        vector<int>adj[n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int ans=0;
        vector<int>v(n,0);
        for(i=0;i<n;i++){
            if(v[i]==0){
                bfs(adj,v,i); ans++;
            }
        }
        return ans;
    }
};