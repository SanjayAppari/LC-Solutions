class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=INT_MIN;
        for(auto i:edges){
            for(auto j:i) n=max(n,j);
        }
        vector<int>in(n+1);
        for(auto i:edges){
            in[i[0]]++;
            in[i[1]]++;
        }
        for(int i=1;i<=n;i++){
            if(in[i]==n-1) return i;
        }
        return -1;
    }
};