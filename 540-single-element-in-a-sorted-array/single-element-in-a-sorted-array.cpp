class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int l=0,h=n-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(m==0 && nums[m]<nums[m+1]) return nums[m];
            if(m==n-1 && nums[m]>nums[m-1]) return nums[m];
            if(nums[m]>nums[m-1] && nums[m]<nums[m+1]) return nums[m];
            if(nums[m]==nums[m+1]){
                if((h-m+2)%2==0) l=m+2;
                else h=m-1;
            }
            else{
                if((m-l)%2==0) h=m-2;
                else l=m+1;
            }
        }
        return 0;
    }
};