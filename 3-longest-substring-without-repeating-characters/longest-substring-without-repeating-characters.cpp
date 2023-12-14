class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<int>st;
        unordered_map<char,int>m;
        int i,n=s.length(),ans=0;
        int l=0,r=0;
        while(r<n){
            if(m[s[r]]==0){
                ans=max(ans,r-l+1);
                cout<<"ll";
                m[s[r]]++;
                r++;
            }
            else{
                m.erase(s[l]); l++;
            }
        }
        return ans;
    }
};