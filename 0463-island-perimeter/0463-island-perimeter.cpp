class Solution {
public:
int dr[4] = {-1,1,0,0};
int dc[4] = {0,0,-1,1};
bool visited[100][100];
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int rSize = grid.size();
        int cSize = grid[0].size();
        int curRow,curCol;
        for(int r = 0; r < rSize; r++){
            for(int c = 0; c < cSize; c++){
                if(grid[r][c] == 1){
                    curRow = r;
                    curCol = c;
                    break;
                }
            }
            if(curRow != -1) break;
        }
        queue<pair<int,int>> que;
        que.push({curRow, curCol});
        visited[curRow][curCol] = true;
        while(!que.empty()){
            curRow = que.front().first;
            curCol = que.front().second;
            que.pop();
            for(int i = 0; i < 4; i++){
                int nextRow = curRow + dr[i];
                int nextCol = curCol + dc[i];
                if(nextRow >= 0 && nextRow < rSize && nextCol >= 0 && nextCol < cSize){
                    if(grid[nextRow][nextCol] == 1 && !visited[nextRow][nextCol]){
                        que.push({nextRow,nextCol});
                        visited[nextRow][nextCol] = true;
                    }else if(grid[nextRow][nextCol] == 0){
                        ans++;
                    }
                }else{
                    ans++;
                }         
            }
        }
        return ans;
    }
    //  솔루션을 보니 대부분 그냥 배열로 풀었넹 ㅎㅎ;
};