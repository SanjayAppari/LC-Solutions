class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string>m;
        set<string>v;
        for(auto i:paths){
            m[i[0]]=i[1];
            v.insert(i[0]);
            v.insert(i[1]);
        }
        for(auto i:v) {
            if(m[i]=="") return i;
        }
        return "";
    }

};