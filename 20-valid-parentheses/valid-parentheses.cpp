class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int i,n=s.length();
        for(i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return 0;
                char t=st.top();
                if(t=='{' && s[i]=='}' || t=='[' && s[i]==']' || t=='(' && s[i]==')') st.pop();
                else return 0;
            }
        }
        return st.empty();
    }
};