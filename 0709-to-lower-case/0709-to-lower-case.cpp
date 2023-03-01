class Solution {
public:
    string toLowerCase(string s) {
        int num;
        char ch;
        for(int i=0;i<s.size();i++){
            num = s[i];
            if(num<91 && num>64){
                ch = char(num+32);
                s[i] = ch;
            }
        }
        return s;
    }
};
