class Solution {
public:
    int minOperations(string s) {
        int i,n=s.length(),ans=0,ans2=0;
        char c='0';
        for(auto i:s){
            if(i!=c) ans++;
            if(c=='0') c='1';
            else c='0';
        }
        c='1';
        for(auto i:s){
            if(i!=c) ans2++;
            if(c=='0') c='1';
            else c='0';
        }
        return min(ans,ans2);
    }
};