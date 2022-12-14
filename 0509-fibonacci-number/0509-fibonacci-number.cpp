class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        int prev=0;
        int curr=1;
        for(int i=2;i<=n;i++){
            int temp = prev+curr;
            prev=curr;
            curr=temp;
        }
        return curr;
    }
};