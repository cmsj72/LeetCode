public class Solution {
    public int IslandPerimeter(int[][] grid) {
        int ans = 0;
        for(int r = 0; r < grid.Length; r++){
            for(int c = 0; c < grid[r].Length; c++){
                if(grid[r][c] == 1){
                    ans += 4;
                    if(c - 1 >= 0 && grid[r][c - 1] == 1) ans--;
                    if(c + 1 < grid[r].Length && grid[r][c + 1] == 1) ans--;
                    if(r - 1 >= 0 && grid[r - 1][c] == 1) ans--;
                    if(r + 1 < grid.Length && grid[r + 1][c] == 1) ans--;
                }
            }
        }
        return ans;
    }
}