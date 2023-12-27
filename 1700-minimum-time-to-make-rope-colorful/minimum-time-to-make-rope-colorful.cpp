class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0,i,n=colors.size(),time=neededTime[0];
        char c=colors[0];

        for(i=1;i<n;i++){
            if(c==colors[i]){
                ans+=min(time,neededTime[i]);
                time=max(time,neededTime[i]);
            }
            else {
                c=colors[i]; time=neededTime[i];
            }
        }
        return ans;
    }
};