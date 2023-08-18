class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        unordered_map<int,int>m;
        unordered_map<int,vector<int>>m2;
        int i,j,ans=0;
        for(i=0;i<roads.size();i++){
            m[roads[i][0]]++; m[roads[i][1]]++;
            m2[roads[i][0]].push_back(roads[i][1]);
            m2[roads[i][1]].push_back(roads[i][0]);
        }

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                int p=m[i]+m[j];
                for(int k=0;k<m2[i].size();k++){
                    if(m2[i][k]==j) p--;
                }
                 ans=max(ans,p);
            }
        }
return ans;
    }
};