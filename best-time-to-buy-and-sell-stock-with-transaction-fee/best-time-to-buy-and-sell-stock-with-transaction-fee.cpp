class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int i,j,n=prices.size();        
        int buy=prices[0]*(-1);
        int ans=0;
        for(i=1;i<n;i++){
            buy=max(buy,ans-prices[i]);
            ans=max(ans,buy+prices[i]-fee);
        }
        return ans;
    }
};