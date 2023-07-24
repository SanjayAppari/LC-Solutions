class Solution {
public:
    double pow(double a,int b)
    {
        // if(a==1) return 1;
        if(b==0) return 1;
        if(b==1) return a;
        double p=pow(a,b/2);
        cout<<p<<" ";
        if(b&1){
            // cout<<a*p*p<<" ";
            return a*p*p;
        }
        else return p*p;
    }
    double myPow(double x, int n) {
        if(n<0) return 1/pow(x,n);
        return pow(x,n);
    }
};