class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size(),i;
        int m1=arrays[0].front();
        int m2=arrays[0].back();
        int ans = INT_MIN;
        for(i=1;i<n;i++){
            ans = max({
                ans,
                abs(arrays[i].front()-m2), 
                abs(arrays[i].back()-m1)
            });
            m1=min(m1,arrays[i].front());
            m2=max(m2,arrays[i].back());
        }
        return ans;
    }
};