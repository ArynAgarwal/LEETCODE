class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        int len = operations.size();
        for(int i=0;i<len;i++){
            if(operations[i] == "++X" || operations[i] == "X++"){
                ans+= 1;
            }
            else{
                ans = ans -1;
            }
        }
        return ans;
    }
};