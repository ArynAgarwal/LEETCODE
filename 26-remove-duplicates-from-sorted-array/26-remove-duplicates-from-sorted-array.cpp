class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cur=nums[0];
        int i=1,j=1;
        while(j<nums.size()){
            if(nums[j]>cur){
                cur=nums[j];
                nums[i]=nums[j];
                i = i+1;
            }
            j = j+1;
        }
        return i;
    }
};