class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int m1=0,m2=0;
        if(right.size()) m1=*min_element(right.begin(),right.end()); 
        if(left.size()) m2=*max_element(left.begin(),left.end());
        if(right.size() && left.size()==0) {
            return n-m1;
        }
        if(left.size() && right.size()==0) {
            return m2;
        }
        if(right.size()==0 && left.size()==0) return 0;
        return max(n-m1,m2);
    }
};