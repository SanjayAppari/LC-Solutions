class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>m;
        for(auto i:s) m[i]++;
        int c=0;
        for(auto i:t){
            if(m[i]==0) c++;
            else{
                m[i]--;
                if(m[i]==0) m.erase(i);
            }
        }
        int ans=0;
        for(auto i:m) ans+=i.second;
        ans=abs(ans-c);
        return c;
    }
};