class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v;
        int i,n=nums.size();
        k=k%n;
        for(i=n-k;i<n;i++)
            v.push_back(nums[i]);
        for(i=0;i<n-k;i++)
            v.push_back(nums[i]);
        for(i=0;i<n;i++) nums[i]=v[i];
    }
};