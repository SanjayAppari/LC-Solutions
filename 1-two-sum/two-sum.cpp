class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int k=m[target-nums[i]];
            if(k!=0) return {k-1,i};
            m[nums[i]]=i+1;
        }
        return {};
    }
};