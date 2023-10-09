class Solution {
public:
    

    bool canFinish(int n, vector<vector<int>>& p) {
        int i;
        vector<int>adj[n+1];
        vector<int>inDegree(n+1,0);
        for(i=0;i<p.size();i++){
            adj[p[i][0]].push_back(p[i][1]);
            inDegree[p[i][1]]++;
        }
        queue<int>q;
        for(i=0;i<n;i++){
            if(inDegree[i]==0) q.push(i);
        }
        int c=0;
        while(!q.empty()){
            int node = q.front(); q.pop();
            c++;
            for(auto i:adj[node]){
                inDegree[i]--;
                if(inDegree[i]==0) q.push(i);
            }
        }
        return c==n;
    }
};