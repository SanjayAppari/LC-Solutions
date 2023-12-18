class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i,n=a.size(),ans=0,m=INT_MAX;
        for(auto i:a){
            m=min(m,i);
            ans=max(ans,abs(m-i));
        }
        return ans;
    }
};