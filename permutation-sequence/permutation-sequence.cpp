class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        int i;
        for(i=1;i<=n;i++) s+=i+'0';
        k--;
        while(next_permutation(s.begin(),s.end()) && k!=1) k--;
        return s;
    }
};