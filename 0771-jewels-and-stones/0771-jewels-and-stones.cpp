class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int m = stones.length();
        int n = jewels.length();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(jewels[j]==stones[i]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};