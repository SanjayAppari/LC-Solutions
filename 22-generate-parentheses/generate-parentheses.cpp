class Solution {
public:
    void fun(int o,int c,vector<string>&ans,string s){
        if(o==0 && c==0){
            ans.push_back(s); return;
        }
        if(o<c) fun(o,c-1,ans,s+')');
        if(o>0) fun(o-1,c,ans,s+'(');
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        fun(n,n,ans,s);
        return ans;
    }
};