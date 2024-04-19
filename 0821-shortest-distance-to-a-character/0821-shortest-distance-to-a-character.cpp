class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> vec(s.size(), 0);
        for(int i = 0; i < s.size(); i++){
            if(s[i] != c){
                int left = i == 0 ? 1000 : 1;
                int right = i == s.size() - 1 ? 1000 : 1;
                bool lFlag = false, rFlag = false;
                while(i - left > -1){
                    if(s[i - left] == c){
                        lFlag = true;
                        break;
                    }
                    left++;
                }
                while(i + right < s.size()){
                    if(s[i + right] == c){
                        rFlag = true;
                        break;
                    }
                    right++;
                }
                vec[i] = min(lFlag ? left : 1000, rFlag ? right : 1000);
            }
        }
        return vec;
    }
};