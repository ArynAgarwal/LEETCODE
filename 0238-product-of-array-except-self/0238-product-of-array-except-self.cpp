class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre;
        pre.push_back(1);
        int a=1;
        for(auto& it: nums){
            a*=it;
            pre.push_back(a);
            cout<<a<<endl;
        }
        cout<<endl;
        vector<int> post;
        int b=1;
        for(int i=nums.size()-1;i>=0;i--){
            b*=nums[i];
            post.push_back(b);
            cout<<b<<endl;
        }
        cout<<endl;
        reverse(post.begin(),post.end());
        post.push_back(1);
        for(auto& it: post){
            cout<<it<<endl;
        }
        vector<int> ans;
        for(int i=1;i<=nums.size();i++){
            int c=0;
            c=pre[i-1]*post[i];
            ans.push_back(c);
        }
        
        return ans;
    }
};