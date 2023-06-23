class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,n=nums.size();
        unordered_map<int,int>m;
        for(i=0;i<n;i++){
            m[nums[i]]++;
            if(m[nums[i]]>(n/2)) return nums[i];
        }
        return -1;
    }
};