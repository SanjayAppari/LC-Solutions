class Solution {
public:

    bool check(int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return 1;
        return 0;
    }

    void dfs(int i,int j,int n,int m,vector<vector<int>>& image,vector<vector<int>>& v,int color,int k){
        if(check(i,j-1,n,m) && v[i][j-1]==0 && image[i][j-1]==k){
            image[i][j-1]=color;
            v[i][j-1]=1;
            dfs(i,j-1,n,m,image,v,color,k);
        }
        if(check(i,j+1,n,m) && v[i][j+1]==0 && image[i][j+1]==k){
            image[i][j+1]=color;
            v[i][j+1]=1;
            dfs(i,j+1,n,m,image,v,color,k);
        }
        if(check(i-1,j,n,m) && v[i-1][j]==0 && image[i-1][j]==k){
            image[i-1][j]=color;
            v[i-1][j]=1;
            dfs(i-1,j,n,m,image,v,color,k);
        }
       if(check(i+1,j,n,m) && v[i+1][j]==0 && image[i+1][j]==k){
            image[i+1][j]=color;
            v[i+1][j]=1;
            dfs(i+1,j,n,m,image,v,color,k);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size(),m=image[0].size(),i,j;
        vector<vector<int>>v(n,vector<int>(m,0));
        int k=image[sr][sc];
        image[sr][sc]=color;
        dfs(sr,sc,n,m,image,v,color,k);
        return image;
    }
};