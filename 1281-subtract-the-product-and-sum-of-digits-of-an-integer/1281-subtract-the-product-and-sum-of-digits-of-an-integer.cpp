class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int x=0;
        while(n!=0){
            x = n%10;
            cout<<"x="<<x<<endl;
            n=n/10;
            cout<<"n="<<n<<endl;
            sum=sum+x;
            cout<<"sum="<<sum<<endl;
            product=product*x;
            cout<<"product="<<product<<endl;
        }
        return product-sum;
    }
};