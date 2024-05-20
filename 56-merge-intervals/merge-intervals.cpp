class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back(intervals[0]);
        for(auto i:intervals){
            if(ans.back()[1]>=i[0]){
                ans.back()[1]=i[1]>ans.back()[1]?i[1]:ans.back()[1];
            }
            else{
                ans.push_back(i);
            }
        }
        return ans;
    }
};