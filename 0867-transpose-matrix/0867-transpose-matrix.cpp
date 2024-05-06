class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        for(int r = 0; r < matrix[0].size(); r++){
            vector<int> tmp;
            for(int c = 0; c < matrix.size(); c++){
                tmp.push_back(matrix[c][r]);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};