class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s=countAndSay(n-1);
        string ans="";
        int i,c=1;
        for(i=0;i<s.length();i++){
            c=1;
            while(i<s.length()-1 && s[i]==s[i+1]){ c++;i++;}
            ans+=to_string(c)+s[i];
        }
        return ans;
    }
};