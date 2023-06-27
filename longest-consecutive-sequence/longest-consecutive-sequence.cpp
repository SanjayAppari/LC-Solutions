class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i,n=nums.size();
        if(n==0) return 0;
        unordered_map<int,int>m;
        for(auto i:nums) m[i]++;
        int ans=0;
        for(i=0;i<n;i++){
            if(m[nums[i]-1]!=0) continue;
            else{
                int j=nums[i];
                while(m[j]!=0) j++;
                ans=max(ans,j-nums[i]);
            }
        } 
        return ans;
    }
};