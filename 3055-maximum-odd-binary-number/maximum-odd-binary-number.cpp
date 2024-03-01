class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0,n=s.length(),i;
        for(auto i:s){
            if(i=='1') c++;
        }
        string ans="";
        for(i=0;i<c-1;i++) ans+='1';
        for(i=0;i<n-c;i++) ans+='0';
        ans+='1';
        return ans;
    }
};