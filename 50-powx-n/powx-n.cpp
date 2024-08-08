class Solution {
public:
    double pow(double a,int b){
        if(a==0) return 0;
        if(b==0) return 1;
        if(b==1 || a==1) return a;
        double p = pow(a,b/2);
        if(b&1) return a*p*p;
        return p*p;
    }

    double myPow(double x, int n) {
        if(n<0) return 1/pow(x,n);
        return pow(x,n);
    }
};