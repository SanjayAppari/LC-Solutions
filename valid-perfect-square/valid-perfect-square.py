class Solution(object):
    def isPerfectSquare(self, num):
        if(num==0):
            return 1;
        l=1
        h=num
        while(l<=h):
            m=l+(h-l)/2;
            r=m*m
            if(r==num):
                return 1
            if(r > num):
                h=m-1;
            else:
                l=m+1
        return 0 