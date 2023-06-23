class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,n=a.size(),ans=0,m=INT_MAX;
        for(i=0;i<n;i++){
            if(m>a[i]) m=a[i];
            ans=max(ans,a[i]-m);
        }
        return ans;
    }
};