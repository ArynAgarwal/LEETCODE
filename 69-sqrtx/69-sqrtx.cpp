class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        else{
            int a = x/2;
            // cout<<a<<endl;
            for(long i=0;i<=a+1;i++){
                if((i*i)>x){
                    return i-1;
                }
            }
        }
        return 0;
    }
};