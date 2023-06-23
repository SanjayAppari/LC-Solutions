class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    
        int i,j,n=nums.size();
        if(n==0) return 0;
        j=n-1;
        i=0;
        while(i<j){
            if(nums[i]==val){
                swap(nums[i],nums[j]);
                j--;
            }
            else i++;
        }
        cout<<i<<j;
        if(nums[j]==val) return i;
        return i+1;
    }
};