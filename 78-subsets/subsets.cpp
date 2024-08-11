class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int i,j,n=nums.size();
        int l=pow(2,n);
        for(i=0;i<l;i++){
            vector<int>v;
            for(j=0;j<n;j++){
                if(i&(1<<j)){
                    v.push_back(nums[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};