class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int i=0,prev=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='('){
                st.push(prev);
                prev=0;
            }
            else{
                prev=st.top() + max(2*prev,1);
                st.pop();
            }
            ++i;
        }
        return prev;
    }
};