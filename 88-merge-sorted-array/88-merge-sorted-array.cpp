class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v;
        int a=0,b=0;
        for(int i=0;i<m+n;i++){
            // cout<<"num1 "<<a<<" num2 "<<b<<endl;
            if(a<m && b<n){
                if(nums1[a]>nums2[b]){
                    // cout<<b<<endl;
                    v.push_back(nums2[b]);
                    b++;
                }
                else{
                        // cout<<a<<endl;
                        v.push_back(nums1[a]);
                        a++;
                }
            }
            else if(a<m){
                v.push_back(nums1[a]);
                        a++;
            }
            else{
                v.push_back(nums2[b]);
                    b++;
            }
        }
        
        // nums1 = v;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i;j<n;j++){
        //         if(nums2[i]>nums2[j]){
        //             int t=0;
        //             t = nums2[i];
        //             nums2[i]=nums2[j];
        //             nums2[j]=t;
        //         }
        //     }
        // }
        // for(int i=0;i<nums2.size();i++){
        //     cout<<nums2[i]<<endl;
        // }
        // nums1.pop_back();
        // nums1.pop_back();
        // nums1.pop_back();
        for(int i=0;i<m+n;i++){
            // cout<<v[i]<<endl;
            nums1[i]=v[i];
            // nums1.push_back(nums2[i]);
        }
    }
};