class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<int>st;
        unordered_map<char,int>m;
        int i,n=s.length(),ans=0;
        int st=0,e=0;
        while(st<n){
            if(m[s[st]]==0){
                ans=max(ans,st-e+1);
                m[s[st]]++;
                st++;
            }
            else{
                m.erase(s[e]);
                e++;
            }
        }
        return ans;
    }
};