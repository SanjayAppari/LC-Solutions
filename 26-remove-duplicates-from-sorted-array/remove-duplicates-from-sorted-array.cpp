class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p=0,i,n=nums.size();
        for(i=1;i<n;i++){
            if(nums[p]!=nums[i]){
                nums[++p] = nums[i];
            }
        }
        return p+1;
    }
};