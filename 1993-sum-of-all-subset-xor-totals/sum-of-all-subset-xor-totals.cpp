class Solution {
public:
    void fun(int i,int n,vector<int>&nums, int s,int &ans){
        if(i==n){
            ans+=s;
            return;
        }
        fun(i+1,n,nums,s^nums[i],ans);
        fun(i+1,n,nums,s,ans);
    }

    int subsetXORSum(vector<int>& nums) {
        int s=0,ans=0,n=nums.size();
        fun(0,n,nums,s,ans);
        return ans;
    }

};