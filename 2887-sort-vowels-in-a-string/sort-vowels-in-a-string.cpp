class Solution {
public:
    string sortVowels(string s) {
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u') s1+=s[i];
        }
        sort(s1.begin(),s1.end());
        int i,j=0;
        for(i=0;i<s.length();i++){
            if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u') s[i]=s1[j++];
        }
        return s;
    }
};