class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int dir[9][2] = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,0},{0,1},{1,-1},{1,0},{1,1}};
        vector<vector<int>> ans;
        for(int r = 0; r < img.size(); r++){
            vector<int> tmp;
            int cur_r, cur_c;    
            for(int c = 0; c < img[r].size(); c++){
                int cnt = 0, sum = 0;
                for(int i = 0; i < 9; i++){
                    cur_r = r + dir[i][0];
                    cur_c = c + dir[i][1];
                    if(cur_r < 0 || cur_c < 0 || cur_r >= img.size() || cur_c >= img[0].size()){
                        continue;
                    }
                    cnt++;
                    sum += img[cur_r][cur_c];
                }
                tmp.push_back(round(sum / cnt));
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};