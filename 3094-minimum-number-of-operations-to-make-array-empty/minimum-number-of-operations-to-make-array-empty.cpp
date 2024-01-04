class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto i:nums) m[i]++;
        for(auto i:m){
            int k=i.second;
            if(k==1) return -1;
            ans+=(k/3);
            if(k%3) ans++;
        }
        return ans;
    }
};