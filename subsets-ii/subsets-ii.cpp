class Solution {
public:

    void fun(vector<int>&nums,vector<vector<int>>&ans,vector<int>&v,int i){
        ans.push_back(v);
        for(int j=i;j<nums.size();j++){
            if(i!=j && nums[j]==nums[j-1]) continue;
            v.push_back(nums[j]);
            fun(nums,ans,v,j+1);
            v.pop_back();
        }

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(nums.begin(),nums.end());
        fun(nums,ans,v,0);
        return ans;
    }
};