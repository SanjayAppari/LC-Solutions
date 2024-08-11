class Solution {
public:

    void fun(int i,vector<vector<int>>&ans,vector<int>&v,int n,vector<int>&nums){
        if(i>=n){
            ans.push_back(v); return ;
        }
        v.push_back(nums[i]);
        fun(i+1,ans,v,n,nums);
        v.pop_back();
        fun(i+1,ans,v,n,nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=nums.size();
        fun(0,ans,v,n,nums);
        return ans;   
    }
};