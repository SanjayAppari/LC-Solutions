class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int>ans;
        map<int,vector<int>>m;
        for(auto i:arr){
            int c=0;
            int ii=i;
            while(i){
                if(i%2==1) c++; i/=2;
            }
            m[c].push_back(ii);
        }
        for(auto i:m){
            vector<int>x=i.second;
            sort(x.begin(),x.end());
            for(auto j:x) ans.push_back(j);
        }
        return ans;
    }
};