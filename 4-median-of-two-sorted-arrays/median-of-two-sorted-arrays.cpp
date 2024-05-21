class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;
        int i,j,n=nums1.size(),m=nums2.size();
        i=0; j=0;
        while(i<n && j<m){
            if(nums1[i]<=nums2[j]){
                v.push_back(nums1[i]); i++;
            }
            else{
                v.push_back(nums2[j]); j++;
            }
        }
        while(i<n){
            v.push_back(nums1[i]); i++;
        }
        while(j<m){
            v.push_back(nums2[j]); j++;
        }
        int n1=v.size();
        if(n1%2==1) return v[n1/2];
        int x=v[n1/2];
        int y=v[(n1-1)/2];
        cout<<x<<" "<<y;
        return (x+y)/2.0;
    }
};