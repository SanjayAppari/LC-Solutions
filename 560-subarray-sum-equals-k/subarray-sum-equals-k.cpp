class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int i,s=0,n=nums.size(),c=0;
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            s+=nums[i];
            if(s==k) c++;
            if(m[s-k]!=0) c+=m[s-k];
            m[s]++;
        }
        return c;
    }
};