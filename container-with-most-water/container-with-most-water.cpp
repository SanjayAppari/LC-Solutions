class Solution {
public:
    int maxArea(vector<int>& height) {
      int i,n=height.size(),ans=0;
      i=0;
      int j=n-1;
      while(i<j){
          if(height[i]>height[j]){
              ans=max(ans,(j-i)*height[j]);
              j--;
          }
          else {
              ans=max(ans,(j-i)*height[i]);
              i++;
          }
      }
      return ans;
    }
};

