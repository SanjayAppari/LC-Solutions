class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int i,j,n=nums.size();
        for(i=0;i<n;i++){
            int t=nums[i]*(-1);
            int l=i+1,r=n-1;
            while(l<r){
                int k=nums[l]+nums[r];
                if(k==t) st.insert({nums[i],nums[l],nums[r]});
                if(k>t) r--;
                else l++;
            }
        }

        for(auto i:st){
            ans.push_back(i);
        }
        return ans;
    }
};