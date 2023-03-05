class Solution {
public:
    int balancedStringSplit(string s) {
        int countl = 0;
        int countr = 0;
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                countr++;
            }
            if(s[i]=='L'){
                countl++;
            }
            if(countl == countr){
                ans++;
                countl=0;
                countr=0;
            }
        }
        return ans;
    }
};