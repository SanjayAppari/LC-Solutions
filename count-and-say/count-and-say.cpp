class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string s=countAndSay(n-1);
        int i;
        string ans="";
        for(i=0;i<s.length();i++){
            int c=1;
            while(i<s.length()-1 && s[i]==s[i+1]){
                i++; c++;
            }
            ans+=(to_string(c) + s[i]);
        }
        return ans;
    }
};