class Solution {
public:
    int fun(int n,vector<int>& dp){
        if(n<=1) return dp[n]=1;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fun(n-2,dp)+fun(n-1,dp);
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        fun(n,dp);
        return dp[n];
    }
};