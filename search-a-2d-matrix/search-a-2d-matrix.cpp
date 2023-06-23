class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i,j,n=matrix.size(),m=matrix[0].size();
        int l=0,h=(m*n)-1;
        while(l<=h)   {
            int mid=l+(h-l)/2;
            if(matrix[mid/m][mid%m]==target) return 1;
            if(matrix[mid/m][mid%m]>target) h=mid-1;
            else l=mid+1;
        }
        return 0;
    }
};