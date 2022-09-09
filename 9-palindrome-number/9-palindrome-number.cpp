class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        if(num<0){
            return false;
        }
        int digit;
        long rev = 0;
        while(x!=0){
            digit = x % 10;
            rev = (rev*10) + digit;
            x= x/10;
        }
        
        if(num == rev){
            return true;
        }
        else{
            return false;
        }
    }
};