class Solution {
public:

 
    string longestPalindrome(string s) {
        string ans="";
        int len=0,i,j,n=s.length();
        for(i=0;i<n;i++){
            int left=i,right=i;
            while(left>=0 && right<n && s[left]==s[right]){
                int prelen = right-left+1;
                if(prelen > len) {
                    string s1="";
                    for(j=left;j<=right;j++) s1+=s[j];
                    ans=s1;
                    len=prelen;
                }
                left--;
                right++;
            }

            left=i;
            right=i+1;
             while(left>=0 && right<n && s[left]==s[right]){
                int prelen = right-left+1;
                if(prelen > len) {
                    string s1="";
                    for(j=left;j<=right;j++) s1+=s[j];
                    ans=s1;
                    len=prelen;
                }
                left--;
                right++;
            }
        }
        return ans;
    }
};