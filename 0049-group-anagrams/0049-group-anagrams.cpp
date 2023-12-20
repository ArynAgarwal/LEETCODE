class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> vec;
        
        unordered_map<string,vector<string>> mp;
        int n = strs.size();
        string temp;
        
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);
        }
        
        for(auto it=mp.begin();it!=mp.end();++it){
            vec.push_back(it->second);
        }
        return vec;
    }
};