class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,n1=nums1.size(),n2=nums2.size();
        vector<int>v;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                v.push_back(nums1[i]); i++;
            }
            else{
                v.push_back(nums2[j]); j++;
            }
        }
        while(i<n1){
            v.push_back(nums1[i]); i++;
        }
        while(j<n2){
            v.push_back(nums2[j]); j++;
        }
        int n=v.size();
        double ans = 0;
        if(n%2==1) ans = (v[n/2]);
        else ans=(v[(n/2)-1]+v[n/2])/(2*1.0);
        return ans;
    }
};