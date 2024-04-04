class Solution {
public:
    int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
    void dfs(vector<vector<int>>& image, int sr, int sc, int color){
        int num = image[sr][sc];
        image[sr][sc] = color;
        for(int i = 0; i < 4; i++){
            int nr = sr + dir[i][0];
            int nc = sc + dir[i][1];
            if(0 <= nr && nr < image.size() && 0 <= nc && nc < image[0].size() && image[nr][nc] == num){
                dfs(image, nr,nc, color);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc] != color){
            dfs(image, sr,sc, color);
        }
        return image;
    }
};