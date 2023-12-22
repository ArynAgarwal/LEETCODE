bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        
        for(auto& it:nums){
            mp[it]+=1;
        }
        
        vector<pair<int,int>> vec;
        for(auto& it:mp){
            vec.push_back(it);
            // cout<<it.first<<"--"<<it.second<<endl;
        }
        
        sort(vec.rbegin(),vec.rend(),cmp);
        
        for(auto& it:vec){
            cout<<it.first<<"--"<<it.second<<endl;
        }
        int ans=-1;
        int temp=0;
        for(auto& it:vec){
            
            if(it.first%2==0){
                if(temp<it.second){
                    ans=it.first;
                    temp=it.second;
                }
                else if(temp==it.second){
                    if(ans>it.first){
                        ans=it.first;
                    }
                     
                }    
            } 
        }
        
        return ans;
    }
};