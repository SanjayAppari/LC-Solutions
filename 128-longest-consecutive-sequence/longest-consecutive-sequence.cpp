class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int i,n=nums.size();
        if(n==0) return 0;
        unordered_map<int,int>m;
        int ans=1;
        for(auto i:nums) m[i]++;
        for(auto i:nums){
            if(m[i-1]!=0) continue;
            else{
                int j=i;
                while(m[j]!=0) j++;
                ans=max(ans,j-i);
            }
        }
        return ans;
    }
};