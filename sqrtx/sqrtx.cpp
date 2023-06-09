class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        int l=1,h=x;
        while(l<=h){
            int m = l+ (h-l)/2;
            if(m==x/m) return m;
            if(m > x/m) h=m-1;
            else l=m+1;
        }
        return h;
    }
};