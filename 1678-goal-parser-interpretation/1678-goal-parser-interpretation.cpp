class Solution {
public:
    string interpret(string c) {
        string s="";
        for(int i=0;i<c.size();i++){
            if(c[i]=='('){
                if(c[i+1]==')'){
                    s = s+ 'o';
                }
                    
            }
            else{
                if(c[i]!=')'){
                    s =s+ c[i];
                }
            }
        }
        return s;
    }
};