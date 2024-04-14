class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int len = 0;
        int line = 1;
        for(int i = 0; i < s.size(); i++){
            if(len == 100){
                len = 0;
                line++;
            }
            if(len + widths[s[i] - 'a'] <= 100){
                len += widths[s[i] - 'a'];
            }else{
                len = 0;
                line++;
                i--;
            }
        }
        return {line, len};
    }
};