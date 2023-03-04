class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a;
        int count = 0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<indices.size();j++){
                if(count == indices[j]){
                    //cout<<indices[j]<<"---"<<s[j]<<endl;
                    a = a + s[j];
                    count++;
                    
                }
            }
        }
        return a;
    }
};