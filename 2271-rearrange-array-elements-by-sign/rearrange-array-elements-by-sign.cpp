class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(),e=0,o=1;
        vector<int>ans(n);
        for(auto i:nums){
            if(i>0){
                ans[e]=i;e+=2;
            }
            else{
                ans[o]=i; o+=2;
            }
        }
        return ans;
    }
};