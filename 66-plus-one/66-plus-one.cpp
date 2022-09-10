class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        
        
        int n = v.size()-1;
        int carry = 0;
        while(n>=0)
        {
            if(v[n] == 9)
            {
                v[n] = 0;
                carry = 1;
            }
            else
            {
                v[n] = v[n]+1;
                carry = 0;
                break;
            }
            n--;
        }
        if(carry== 1)
        {
            v[0] = 1;
            v.push_back(0);
        }
        return v;
    }
};