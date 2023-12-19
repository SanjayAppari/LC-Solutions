class Solution {
public:

    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int i,j,n=img.size(),m=img[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                int s=img[i][j],c=1;
                if(check(i+1,j,n,m)) {  // down 
                    c++; s+=img[i+1][j];
                }
                if(check(i-1,j,n,m)) { // up
                    c++; s+=img[i-1][j];
                }
                if(check(i,j+1,n,m)) { // right
                    c++; s+=img[i][j+1];
                }
                if(check(i,j-1,n,m)) { // left
                    c++; s+=img[i][j-1];
                }
                if(check(i-1,j-1,n,m)) { // up-left
                    c++; s+=img[i-1][j-1];
                }
                if(check(i-1,j+1,n,m)) { // up-right
                    c++; s+=img[i-1][j+1];
                }
                if(check(i+1,j-1,n,m)) { // down-left
                    c++; s+=img[i+1][j-1];
                }
                if(check(i+1,j+1,n,m)) { // down-right
                    c++; s+=img[i+1][j+1];
                }
                ans[i][j]=(s/c);
            }
        }
        return ans;
    }
};