class Solution {
public:
    
    int v[1001];
    int fun(int i,vector<int> &nums,int k)
    {
        if(i==nums.size()) {
            return 1;
        }
        int pick=0;
        if(nums[i]-k < 0 || v[nums[i]-k]==0)
        {
            v[nums[i]]++;
            pick=fun(i+1,nums,k);
            v[nums[i]]--;
        }

        int nopick=fun(i+1,nums,k);
        return pick+nopick;
    }


   
    int beautifulSubsets(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        memset(v,0,sizeof(v));
        return fun(0,nums,k)-1;
    }
};