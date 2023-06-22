class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int i,n=strs.size();
        string s1=strs[0],s2=strs[n-1],ans="";
        for(i=0;i<s1.length();i++){
            if(s1[i]==s2[i]) ans+=s1[i];
            else break;
        }
        return ans;
    }
};