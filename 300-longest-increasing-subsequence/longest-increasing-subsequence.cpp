class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        int i,j,l=0,t=0,n=nums.size();
        vector<int>v(n);
        v[t++]=nums[0];
        for(i=1;i<n;i++)
        {
            if(lower_bound(v.begin(),v.begin()+t,nums[i])==v.begin()+t)
                v[t++]=nums[i];
            else
                *(lower_bound(v.begin(),v.begin()+t,nums[i]))=nums[i];
        }
        return t;
    }
};