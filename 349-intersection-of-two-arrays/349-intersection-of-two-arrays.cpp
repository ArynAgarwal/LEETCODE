class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        
        vector<int> vec;
        int n=0;
        int m=0;
        int s=0;
        while(n<nums1.size() && m<nums2.size()){
            s=vec.size();
            if(nums1[n]<nums2[m]){
                n++;
            }
            else if(nums2[m]<nums1[n]){
                m++;
            }
            else{
                vec.push_back(nums1[n]);
                n++;
                m++;
                // cout<<s<<"- inner loop executed;";
                if((s>0) && (vec[s]==vec[s-1])){
                    cout<<s<<"- inner loop executed;";
                    vec.pop_back();
                }
            }
        }
        cout<<s<<"- before return;";
        return vec;
    }
};