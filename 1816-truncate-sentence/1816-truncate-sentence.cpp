class Solution {
public:
    string truncateSentence(string s, int k) {
        int flag = 0;
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                flag++;
                if(flag==k){
                break;
                }
                ans = ans + s[i];
            }
            else{
                ans = ans + s[i];
            }
            
        }
        return ans;
    }
};