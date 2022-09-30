class Solution {
public:
    int numberOfMatches(int n) {
        int count=0;
        int num = n;
        while(num>1){
            if(num%2==0){
                count = count + (num/2);
                // cout<<num << " when "<< count<<endl;
                num = num/2;
            }
            else {
                count = count + ((num-1)/2);
                // cout<<num << " when "<< count<<endl;
                num = (num-1)/2  + 1;
            }
        }
        return count;
    }
};