class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>p(n),s(n);
        int i,m=height[0];
        for(i=0;i<n;i++){
            if(m<height[i]) m=height[i];
            p[i]=m;
        }
        m=height[n-1];
        for(i=n-1;i>=0;i--){
            if(m<height[i]) m=height[i];
            s[i]=m;
        }
        int ans=0;
        for(i=0;i<n;i++){
            ans+=min(p[i],s[i])-height[i];
        }
        return ans;
    }
};