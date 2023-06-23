class Solution {
public:

    bool ispalindrome(string s,int start,int  end){
        while(start<=end){
            if(s[start]!=s[end]) return 0;
            start++; end--;
        }
        return 1;
    }

    void fun(int i,string s,vector<vector<string>>&ans,vector<string>&v){
        if(i==s.size()){
            ans.push_back(v);
            return ;
        }
        for(int j=i;j<s.size();j++){
            if(ispalindrome(s,i,j)){
                v.push_back(s.substr(i,j-i+1));
                fun(j+1,s,ans,v);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        fun(0,s,ans,v);
        return ans;
    }
};