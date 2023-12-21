bool ans(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto i:nums){
            mp[i]+=1;
        }
        
        vector<pair<int,int>> vec;
        for(auto it:mp){
            vec.push_back(it);
        }
        
        sort(vec.begin(),vec.end(),ans);
        
        vector<int> cmp;
        for(auto it:vec){
            if(k>0){
                cmp.push_back(it.first);
                k--;
            }
            // cout<<it.first<<"--"<<it.second<<endl;
        }
        return cmp;
    }
};