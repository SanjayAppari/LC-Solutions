class Solution {
public:
    string makeFancyString(string s) {

        string ans="";
        ans+=s[0];
        long long c=1,i;
        for(i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
                c++;
            }else{
                c=1;
            }
            if(c<3) ans+=s[i];
        }
        return ans;
    }
};