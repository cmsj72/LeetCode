class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int len = strs[0].length();
        int n = strs.size();
        int ans = 0;
        for(int i = 0; i < len; i++){
            for(int j = 0; j < n - 1; j++){
                if(strs[j][i] > strs[j+1][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};