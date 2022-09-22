class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0,ans=0;
        // int n = sizeof(count) / sizeof(count[0]);
        for(int i=0;i<sentences.size();i++){
            count=1;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' '){
                    count++;
                    // cout<<count[i]<<endl;
                }
            }
            
            ans=max(count,ans);
        }
        // for(int i=0;i<n;i++){
        //     // cout<<count[i]<<"-";
        // }
        return ans;
    }
};