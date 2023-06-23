class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>ans;
        int i,j,n=nums.size();
        for(i=0;i<n-2;i++){
            if(i==0 || i>0 && nums[i]!=nums[i-1]){
            int t=(-1)*nums[i];
            int left=i+1,right=n-1;
            while(left<right){
                int sum=nums[left]+nums[right];
                if(sum==t){
                    ans.insert({nums[i],nums[left],nums[right]}); 
                }
                if(sum>t) right--;
                else left++;
            }
            }
        }
        vector<vector<int>>ans1;
        ans1.insert(ans1.end(),ans.begin(),ans.end());
        return ans1;
    }
};