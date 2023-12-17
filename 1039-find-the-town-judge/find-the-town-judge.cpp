class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>inDegree(n+1),outDegree(n+1);
        int i;
        for(auto i:trust){
            inDegree[i[1]]++;
            outDegree[i[0]]++;
        }
        for(i=1;i<=n;i++){
            if(inDegree[i]==n-1 && outDegree[i]==0) return i;
        }
        return -1;
    }
};