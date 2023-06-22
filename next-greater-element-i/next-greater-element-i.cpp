class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m;
        stack<int>st;
        int i,n=nums2.size();
        for(i=n-1;i>=0;i--){
            if(st.empty()){
                m[nums2[i]]=-1;
            }
            else{
                while(!st.empty() && nums2[i]>st.top()) st.pop();
                m[nums2[i]]= st.empty()? -1 : st.top();
            }
            st.push(nums2[i]);
        }
        vector<int>v;
        for(i=0;i<nums1.size();i++){
            v.push_back(m[nums1[i]]);
        }
        return v;

    }
};