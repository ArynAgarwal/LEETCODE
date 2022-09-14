class Solution {
public:
    int minPartitions(string n) {
        vector<int> vec;
        for(int i=0;i<n.length();i++){
            vec.push_back(n[i]);
        }
        // for(int i=0;i<vec.size();i++){
        //     cout<<vec[i]<<endl;
        // }
        
        int a =(*max_element(vec.begin(),vec.end())) - 48;
        return a;
    }
};