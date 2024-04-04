public class Solution {
    public int[][] FloodFill(int[][] image, int sr, int sc, int color) {
        int[,] dir = {{-1,0},{1,0},{0,-1},{0,1}};
        int num = image[sr][sc];
        if(num != color){
            dfs(sr,sc);
        }
        return image;
        
        void dfs(int cr, int cc){
            image[cr][cc] = color;
            for(int i = 0; i < 4; i++){
                int nr = cr + dir[i,0];
                int nc = cc + dir[i,1];
                if(0 <= nr && nr < image.Length && 0 <= nc && nc < image[0].Length && image[nr][nc] == num){
                    dfs(nr,nc);
                }
            }
        }
    }

    //  https://leetcode.com/problems/flood-fill/solutions/626440/c-simple-bfs-solution
    // public int[][] FloodFill(int[][] image, int sr, int sc, int newColor) {
    //     int rows = image.Length;
    //     int cols = image[0].Length;
    //     var queue = new Queue<(int Row, int Col)>();
    //     var shifts = new List<(int,int)>() { (-1, 0), (0, -1), (0, 1), (1, 0) };
    //     int oldColor = image[sr][sc];
    //     if (oldColor == newColor)
    //         return image;
    //     queue.Enqueue((sr, sc));
    //     while (queue.Count > 0) {
    //         var cell = queue.Dequeue();
    //         image[cell.Row][cell.Col] = newColor;
    //         foreach (var p in shifts) {
    //             int r = cell.Row + p.Item1;
    //             int c = cell.Col + p.Item2;
    //             if (r >= 0 && r < rows && c >= 0 && c < cols && image[r][c] == oldColor)
    //                 queue.Enqueue((r,c));  
    //         }
    //     }
    //     return image;
    // }
}