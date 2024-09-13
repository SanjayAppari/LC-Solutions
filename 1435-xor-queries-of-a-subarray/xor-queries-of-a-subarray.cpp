class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n=arr.size(),i;
        vector<int>v(n);
        v[0]=arr[0];
        for(i=1;i<n;i++){
            v[i]=arr[i]^v[i-1];
        }
        vector<int>ans;
        for(auto i:queries){
            int k = v[i[1]];
            if(i[0]>0){
                k^=v[i[0]-1];
            }
            ans.push_back(k);
        }
        return ans;
    }
};