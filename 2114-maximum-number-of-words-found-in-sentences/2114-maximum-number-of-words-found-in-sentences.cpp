class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int mcount = 0;
        for(auto x:sen){
            mcount = max(mcount, (int)count(x.begin(),x.end(),' '));
        }
        return mcount+1;
    }
};