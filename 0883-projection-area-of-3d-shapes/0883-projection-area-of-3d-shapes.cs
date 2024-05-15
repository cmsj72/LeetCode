public class Solution {
    public int ProjectionArea(int[][] grid) {
        int ans = 0;
        int N = grid.Length;
        for(int r = 0; r < N; r++){
            int maxR = -1;
            int maxC = -1;
            for(int c = 0; c < N; c++){
                if(grid[r][c] > 0) ans++;
                maxR = Math.Max(maxR, grid[r][c]);
                maxC = Math.Max(maxC, grid[c][r]);
            }
            ans += (maxR + maxC);
        }
        return ans;
    }
}