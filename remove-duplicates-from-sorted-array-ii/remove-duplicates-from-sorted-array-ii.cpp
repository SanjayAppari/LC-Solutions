class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        int i,n=nums.size(),k=0;
        for(i=0;i<n;i++) m[nums[i]]++;
        int j=0;
        for(auto i:m){
            nums[j]=i.first;
            j++;
            if(i.second>1) nums[j++]=i.first;
        }
        return j;
    }
};