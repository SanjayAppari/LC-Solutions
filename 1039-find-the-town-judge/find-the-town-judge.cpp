class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>in(n+1,0),ot(n+1,0);
        int i;
        for(auto i:trust){
            in[i[1]]++; ot[i[0]]++;
        }
        for(i=1;i<=n;i++){
            if(in[i]==n-1 && ot[i]==0) return i;
        }
        return -1;
    }
};