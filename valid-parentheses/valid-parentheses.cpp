class Solution {
public:
    bool isValid(string s) {
        int i,n=s.length();
        stack<char>st;
        for(i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if(st.empty()) return 0;
                if(st.top()=='(' && s[i]==')' || st.top()=='{' && s[i]=='}' || st.top()=='[' && s[i]==']' )
                    st.pop();
                else return 0;
            }
        }
        return st.empty();
    }
};