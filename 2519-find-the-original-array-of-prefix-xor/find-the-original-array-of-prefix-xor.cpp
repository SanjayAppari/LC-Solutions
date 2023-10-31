class Solution {
public:
    vector<int> findArray(vector<int>& a) {
        int i,n=a.size();
        for(i=n-1;i>0;i--) a[i]=a[i]^a[i-1];
        return a;
    }
};