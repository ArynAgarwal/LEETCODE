class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> vec;
        int count = 1;
        count = count + ((s[4] - '0')-(s[1] - '0'));
        cout<<"count="<<count<<endl;
        char x1 = s.at(0);
        char x2 = s.at(3);
        int len = int(x2) - int(x1);
        len = len +1;
        cout<<"len="<<len<<endl;
        for(int i=0;i<len;i++){
            char ch1 = s[0] + i;
            for(int j=0;j<count;j++){
                char ch2 = s[1] + j;
                string a = "";
                a = a + ch1;
                a=a+ch2;
                vec.push_back(a);
            }
        }
        return vec;
    }
};
