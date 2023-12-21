class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>v;
        for(auto i:points) v.push_back(i[0]);
        int n=v.size();
        if(n==1) return 0;
        sort(v.begin(),v.end());
        int ans=v[1]-v[0];
        for(int i=0;i<n-1;i++) ans=max(ans,v[i+1]-v[i]);
        return ans;
    }
};