class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int i,n=bank.size(),c=0;
        for(auto i:bank[0]){
            if(i=='1') c++;
        }
        int ans=0;
        for(i=1;i<n;i++){
            int c1=0;
            for(auto j:bank[i]){
                if(j=='1') c1++;
            }
            if(c1==0) continue;
            else{
                ans+=(c*c1);
                c=c1;
            }
        }
        return ans;
    }
};