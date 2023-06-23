class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,n=nums.size();
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            int t=target-nums[i];
            if(m[t]!=0) return {m[t]-1,i};
            else m[nums[i]]=i+1;
        }
        return {};
    }
};