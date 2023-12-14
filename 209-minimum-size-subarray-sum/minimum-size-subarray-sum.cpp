class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,n=nums.size();
        int ans=INT_MAX,s=0;
        int left=0;
        for(i=0;i<n;i++){
            s+=nums[i];
            while(s>=target){
                ans=min(ans,i+1 - left);
                s-=nums[left];
                left++;
            }
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};