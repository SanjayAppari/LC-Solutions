class Solution {
public:
    bool isPathCrossing(string path) {
        int n=path.size();
        map<pair<int,int>,int>m;
        int i=0,j=0;
        for(auto d:path){
            if(m[{i,j}]!=0) return 1;
            m[{i,j}]++;
            if(d=='N') j++;
            else if(d=='S') j--;
            else if(d=='E') i++;
            else i--;
        }
        if(m[{i,j}]!=0) return 1;
        return 0;
    }
};