class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto i:nums) m[i]++;
        for(auto i:m){
            int k=i.second;
            ans+=(k*(k-1))/2;
        }
        return ans;
    }
};