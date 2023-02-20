class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int min_diff=arr[1]-arr[0];
        for(int i=1;i<n-1;i++){
            if((arr[i+1]-arr[i])<min_diff){
                min_diff = arr[i+1] - arr[i];
            }
        }
        vector<vector<int>> vec;
        for(int i=0;i<n-1;i++){
            if((arr[i+1]-arr[i]) == min_diff)
            {
                vec.push_back({arr[i],arr[i+1]});
            }
        }
        return vec;
    }
};