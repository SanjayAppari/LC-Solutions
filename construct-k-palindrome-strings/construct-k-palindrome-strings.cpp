class Solution {
public:
    bool canConstruct(string s, int k) {
        int i,j,n=s.length();
        if(n==k) return 1;
        unordered_map<char,int>m;
        for(i=0;i<n;i++) m[s[i]]++;

        vector<int>v;
        int e=0,o=0;
        for(auto i:m){
            if(i.second%2==1) {
                o++;
            }
        }
        if(o>k) return 0;
        if(o==k) return 1;
         e=n-o;
        k-=o;
        if(e<k) return 0;
        return 1;


    }
};