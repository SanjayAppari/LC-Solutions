class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,n=a.size(),ans=0;
        vector<int>suf(n,0);
        suf[n-1]=a[n-1];
        for(i=n-2;i>=0;i--){
            suf[i]=max(a[i],suf[i+1]);
        }
        for(i=0;i<n-1;i++){
            if(a[i]<suf[i+1]) ans=max(ans,suf[i+1]-a[i]);
        }
        return ans;
    }
};