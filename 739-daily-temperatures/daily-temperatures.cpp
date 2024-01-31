class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& a) {
        stack<int>st;
        int i,n=a.size();
        vector<int>v(n);
        for(i=n-1;i>=0;i--){
            if(st.empty()) v[i]=0;
            else
            {
                while(!st.empty() && a[st.top()-1]<=a[i]) st.pop();
                v[i] = st.empty() ? 0 : st.top()-i-1;
            } 
            st.push(i+1);
        }
        return v;
    }
};