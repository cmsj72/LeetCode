class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++){
            vector<int> tmp(i,1);
            for(int j = 0; j < tmp.size(); j++){
                if(j != 0 && j != tmp.size() - 1){
                    tmp[j] = ans[i-2][j-1] + ans[i-2][j];
                }
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};