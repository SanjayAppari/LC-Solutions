class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<vector<int>>ans;
        for(auto i:nums) m[i]++;
        while(m.size()){
            vector<int>v;
            int c=0;
            for(auto i:m){
                int k=i.first,f=i.second;
                if(f!=0){
                    v.push_back(k);
                    m[k]--; c++;
                }
            }
            if(c==0) break;
            ans.push_back(v);
        }
        return ans;
    }
};