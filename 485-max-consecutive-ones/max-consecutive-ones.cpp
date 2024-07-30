class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),i,c=0,ans=0;
        for(i=0;i<n;i++){
            if(nums[i]==1){
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