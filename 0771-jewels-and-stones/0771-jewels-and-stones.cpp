class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m = stones.length();
        int n = jewels.length();
        int cnt = 0;
        for(int i=0;i<n;i++){
            cnt+= count(stones.begin(),stones.end(),jewels[i]);
        }
        return cnt;
    }
};