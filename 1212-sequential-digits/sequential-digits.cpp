class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        int i,j;
        for(i=1;i<10;i++){
            int s=i;
            for(j=i+1;j<10;j++){
                s=s*10+j;
                if(s>=low && s<=high) ans.push_back(s);
            }
        }
        sort(ans.begin(),ans.end()); 
        return ans;
    }
};