class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>m1,m2;
        for(auto i:nums) m1[i]++;
        for(auto i:nums){
            if(m1[i]==0) continue;
            if(m2[i-1]>0){
                m1[i]--;
                m2[i-1]--;
                m2[i]++;
            }
            else if(m1[i+1]!=0 && m1[i+2]!=0){
                m1[i]--;
                m1[i+1]--; m1[i+2]--;
                m2[i+2]++;
            }
            else return 0;
        }
        return 1;
    }
};