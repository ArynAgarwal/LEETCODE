class Solution {
public:
    bool isPerfectSquare(int num) {
        bool a = false;
        if(num==1){
            a=true;
        }
        else{
            // int a = 16/2;
            // cout<<a<<endl;
            for(long i=0;i<=(num/2);i++){
                if((i*i)==num){
                    a=true;
                }
            }
        }
        return a;
    }
};