class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        int sum = 0;
        vector<int> runningSum(n);
        for(int i=0;i<n;i++){
            sum = sum + nums[i];
            runningSum[i]=sum;
        }
        return runningSum;
    }
};