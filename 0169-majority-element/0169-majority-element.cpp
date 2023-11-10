class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int n=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             count++;
        //         }
        //         if(count>(nums.size()/2)){
        //             n=nums[i];
        //             break;
        //         }
        //     }
        // }
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        map<int, int>::iterator it = m.begin();
        while (it != m.end()) {
            if((it->second)>(nums.size()/2)){
                n=it->first;
            }
            ++it;
        }
        if(nums.size()==1){
            n=nums[0];
        }
        return n;
    }
};