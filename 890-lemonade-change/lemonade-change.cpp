class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0,c=0;
        for(auto i:bills){
            if(i==5) a++;
            else if(i==10){
                if(a>=1){
                    a--;
                    b++;
                }
                else {
                    return 0;
                }
            }else{
                if(b>=1 && a>=1){
                    b--; a--; c++;
                }else if(a>=3){
                    a-=3; c++;
                }else{
                    return 0;
                }
            }
        }
        return 1;
    }
};