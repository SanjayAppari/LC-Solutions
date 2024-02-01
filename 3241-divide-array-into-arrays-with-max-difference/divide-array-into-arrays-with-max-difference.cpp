class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=2;
        while(j<n){
            if(nums[j]-nums[i]<=k){
                i=j+1;j=i+2;
            }
            else return {};
        }
        vector<vector<int>>ans;
        for(i=0;i<n;i+=3){
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        return ans;
    }
};