class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        
        if(n==1){
            return true;
        }
        else if(n==2 && nums[0]>=1){
            return true;
        }
        int goal = n-1;
        
        for(int i=n-2;i>-1;i--){
            if(i+nums[i]>=goal){
                goal=i;
            }
        }
        
        return goal==0;
    }
};