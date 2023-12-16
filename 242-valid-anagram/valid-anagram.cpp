class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.length()!=s.length()) return 0;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};