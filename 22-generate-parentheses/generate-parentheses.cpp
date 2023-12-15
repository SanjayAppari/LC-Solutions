class Solution {
public:

    void fun(vector<string>& ans,int o,int c,string s){
        if(o==0 && c==0) {
            ans.push_back(s); return ;
        }
        if(o<c) fun(ans,o,c-1,s+')');
        if(o>0) fun(ans,o-1,c,s+'(');
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        fun(ans,n,n,s);
        return ans;
    }
};