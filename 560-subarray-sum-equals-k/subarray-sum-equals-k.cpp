class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int preSum=0,i,n=nums.size(),ans=0;
        for(i=0;i<n;i++){
            preSum+=nums[i];
            int diffSum=preSum-k;
            if(m[diffSum]) ans+=m[diffSum];
            m[preSum]++;
        }
        return ans;
    }
};