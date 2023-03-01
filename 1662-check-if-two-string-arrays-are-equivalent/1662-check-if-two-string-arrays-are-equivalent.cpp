class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        int m = word1.size();
        int n = word2.size();
        for(int i=0;i<m;i++){
            a+=word1[i];
        }
        for(int i=0;i<n;i++){
            b+=word2[i];
        }
        int flag=0,sz;
        bool ans;
        if(a.size()>b.size()){
            sz=a.size();
        }
        else
            sz=b.size();
        for(int i=0;i<sz;i++){
            if(a[i]!=b[i]){
                flag=1;
            }
        }
        if(flag==1){
            ans=false;
        }else
            ans=true;
        return ans;
    }
};