class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> ans;
        for(int i = 0; i < words.size(); i++){
            int cnt = 0;
            for(int k = 0; k < 3; k++){
                for(int j = 0; j < words[i].size(); j++){
                    if(row[k].find(tolower(words[i][j]))  == string::npos){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt < 3){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};