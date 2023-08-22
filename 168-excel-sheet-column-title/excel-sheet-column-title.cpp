class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber){
            int r=(columnNumber-1)%26;
            ans+=(r+'A');
            columnNumber=(columnNumber-1)/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};