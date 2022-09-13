class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans(accounts.size());
        int sum = 0;
        for(int i=0;i<accounts.size();i++){
            for(int j=0;j<accounts[i].size();j++){
                sum = sum + accounts[i][j];
            }
            ans[i]=sum;
            sum = 0;
        }
        int x = *max_element(ans.begin(),ans.end());
        return x;
    }
};