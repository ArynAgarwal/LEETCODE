class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        bool ans = false;
        if(s==t){
            ans=true;
        }
        return ans;
    }
};