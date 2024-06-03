class Solution {
public:
    int appendCharacters(string s, string t) {
        int j=0,n=t.length();
        for(auto i:s){
            if(i==t[j]) j++;
            if(j==n) return 0;
        }
        return n-j;
    }
};