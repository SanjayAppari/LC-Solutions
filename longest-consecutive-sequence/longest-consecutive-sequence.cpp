class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i,n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int c=1,ans=INT_MIN;
        for(i=1;i<n;i++){
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]==1+nums[i-1]) c++;
            else{
                ans=max(ans,c);
                c=1;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};