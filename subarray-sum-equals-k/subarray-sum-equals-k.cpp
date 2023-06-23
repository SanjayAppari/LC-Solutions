class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,n=nums.size(),s=0,ans=0;
        unordered_map<int,int>m;
        m[0]=1;
        for(i=0;i<n;i++){
            s+=nums[i];
            int p=s-k;
            if(m[p]!=0) ans+=m[p];
             m[s]++;
        }
        return ans;
    }
};