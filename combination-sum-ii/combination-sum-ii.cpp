class Solution {
public: 
    void fun(int i,vector<int>&a,int t,vector<vector<int>>&ans,vector<int>&v){
        if(t==0){
            ans.push_back(v);
            return ;
        }
        for(int j=i;j<a.size();j++){
            if(i<j && a[j]==a[j-1]) continue;
            if(a[j]>t) break;
            v.push_back(a[j]);
            fun(j+1,a,t-a[j],ans,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& a, int t) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(a.begin(),a.end());
        fun(0,a,t,ans,v);
        return ans;
    }
};