class Solution {
public:
    void fun(int i,int n,vector<int>&nums,vector<vector<int>>&ans, vector<int>&v){
        if(i>=n){
            ans.push_back(v);
            return;
        }
        v.push_back(nums[i]);
        fun(i+1,n,nums,ans,v);
        v.pop_back();
        fun(i+1,n,nums,ans,v);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int i,n=nums.size();
        fun(i,n,nums,ans,v);
        return ans;
    }
};