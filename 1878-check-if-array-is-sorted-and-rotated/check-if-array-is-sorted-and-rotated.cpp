class Solution {
public:
    bool check(vector<int>& nums) {
        int i,c=0,n=nums.size();
        for(i=0;i<n-1;i++){
            if(nums[i]>nums[i+1])c++;
        }
        if(nums[n-1]>nums[0]) c++;
        return c<=1;
    }
};