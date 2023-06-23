class Solution {
public:

    void fun(int i,int t,vector<int>&a,vector<vector<int>>&ans,vector<int>&v){
        if(i==a.size()){
            if(t==0) ans.push_back(v);
            return;
        }
        if(a[i]<=t){
            v.push_back(a[i]);
            fun(i,t-a[i],a,ans,v);
            v.pop_back();
        }
        fun(i+1,t,a,ans,v);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        fun(0,t,a,ans,v);
        return ans;
    }
};