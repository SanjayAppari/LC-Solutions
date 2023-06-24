class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end());
        int i,n=nums.size(),c=0,ans=0;
        for(i=0;i<n;i++){
            if(nums[i]==m) c++;
            else {
                ans=max(ans,c); c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};