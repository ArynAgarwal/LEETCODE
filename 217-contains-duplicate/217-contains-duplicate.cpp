class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        bool a;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                // cout<<nums[i];
                a= true;
                break;
            }
            else 
                // cout<<nums[i];
                a= false;
        }
        return a;
    }
};