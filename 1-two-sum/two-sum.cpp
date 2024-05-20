class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int i,n=nums.size();
        for(i=0;i<n;i++) m[nums[i]]=i+1;
        for(i=0;i<n;i++){
            if(m[target-nums[i]] && m[target-nums[i]]!=i+1){
                return {i,m[target-nums[i]]-1};
            }
        }
        return {};
    }
};