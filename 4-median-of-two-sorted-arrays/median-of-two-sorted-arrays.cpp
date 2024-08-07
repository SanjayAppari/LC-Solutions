class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size(),i,j;
        i=0; j=0;
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
        if(n%2==1) return v[n/2];
        int x = v[n/2];
        int y = v[(n/2)-1];
        return (x+y)/2.0;

    }
};