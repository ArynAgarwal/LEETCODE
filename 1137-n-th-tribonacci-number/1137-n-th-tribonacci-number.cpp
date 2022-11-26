class Solution {
public:
    int tribonacci(int n) {
        if(n<1) return 0;
        int prev=0;
        int curr=1;
        int fut=1;
        for(int i=2;i<n;i++){
            int temp = prev + curr + fut;
            prev = curr;
            curr = fut;
            fut = temp;
        }
        return fut;
    }
};