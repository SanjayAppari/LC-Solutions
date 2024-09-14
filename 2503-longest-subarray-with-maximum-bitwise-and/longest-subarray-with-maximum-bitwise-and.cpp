class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i,n=nums.size(),c=0,ans=0;
        int mx = *max_element(nums.begin(),nums.end());
        for(i=0;i<n;i++){
            if(nums[i]==mx){
                c++;
            }
            else{
                ans=max(ans,c);
                c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};