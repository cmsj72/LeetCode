class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> ans;
        for(int i = 0; i <= rowIndex; i++){
            vector<int> tmp(i + 1, 1);
            for(int j = 0; j < tmp.size(); j++){
                if(0 < j && j < tmp.size() - 1){
                    tmp[j] = ans[i-1][j-1] + ans[i-1][j];
                }
            }
            ans.push_back(tmp);
        }
        return ans[rowIndex];
    }
};