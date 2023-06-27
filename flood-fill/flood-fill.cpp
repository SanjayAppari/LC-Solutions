class Solution {
public:

    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }

    void dfs(int i,int j,vector<vector<int>>& image,vector<vector<int>>& v,int c,int color){
            cout<<image[i][j]<<" "<<c;
        if(v[i][j]==0 && image[i][j]==c){
            v[i][j]=1;
            image[i][j]=color;
            int n=image.size(),m=image[0].size();
            if(check(i-1,j,n,m)) dfs(i-1,j,image,v,c,color);
            if(check(i,j-1,n,m)) dfs(i,j-1,image,v,c,color);
            if(check(i,j+1,n,m)) dfs(i,j+1,image,v,c,color);
            if(check(i+1,j,n,m)) dfs(i+1,j,image,v,c,color);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int i,j,n=image.size(),m=image[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        int c=image[sr][sc];
        dfs(sr,sc,image,v,c,color);
        return image;
    }
};