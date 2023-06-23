class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int>st;
        int i,n=temp.size();
        vector<int>v(n);
        for(i=n-1;i>=0;i--){
            if(st.empty()) v[i]=0;
            else {
                int c=1;
                while(!st.empty() && temp[st.top()-1]<=temp[i]){
                    c++; st.pop();
                }
                v[i]=st.empty()?0:(st.top()-i-1);
            }
            st.push(i+1);
        }
        return v;
    }
};