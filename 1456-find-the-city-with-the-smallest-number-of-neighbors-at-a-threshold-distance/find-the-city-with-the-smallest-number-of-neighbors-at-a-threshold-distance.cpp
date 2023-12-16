class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>mat(n,vector<int>(n,1e9));
        int i,j,k;
        for(auto i:edges){
            int r=i[0],c=i[1],d=i[2];
            mat[r][c]=d;
            mat[c][r]=d;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j) mat[i][j]=0;
            }
        }
        for(k=0;k<n;k++){
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
                }
            }
        }
        vector<int>ans(n,INT_MAX);
        for(i=0;i<n;i++){
            int c=0;
            for(j=0;j<n;j++){
                if(mat[i][j]<=distanceThreshold) c++;
            }
            ans[i]=c;
        }
        int res=0,c=ans[0];
        for(i=0;i<n;i++){
            if(c>ans[i]){
                c=ans[i]; res=i;
            }
            else if(c==ans[i] && res<i){
                res=i;
            }
        }
        return res;
    }
};