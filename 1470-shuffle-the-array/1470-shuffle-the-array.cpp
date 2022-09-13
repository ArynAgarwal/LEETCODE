class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> vec1;
        vector<int> vec2;
        for(int i=0;i<nums.size()/2;i++){
            vec1.push_back(nums[i]);
        }
        for(int i=nums.size()/2;i<nums.size();i++){
            vec2.push_back(nums[i]);
        }
        int x=0,m=0;
        
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=vec1[x];
                x++;
            }
            else if(i%2==1){
                nums[i]=vec2[m];
                m++;
            }
        }
        return nums;
    }
};