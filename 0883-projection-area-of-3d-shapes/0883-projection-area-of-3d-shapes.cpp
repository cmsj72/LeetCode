class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans = 0;
        int maxA, maxB;
        for(int r = 0; r < grid.size(); r++){
            maxA = -1, maxB = -1;
            for(int c = 0; c < grid[r].size(); c++){
                if(grid[r][c] != 0) ans++;
                maxA = max(maxA, grid[r][c]);
                maxB = max(maxB, grid[c][r]);
            }
            ans += (maxA + maxB);
        }
        return ans;
        //  grid의 행과 열의 길이가 같기 때문에 변수로 하나 저장하고 사용했으면 더 빨랐을듯
    }
};