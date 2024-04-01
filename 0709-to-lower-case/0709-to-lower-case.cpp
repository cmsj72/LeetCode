class Solution {
public:
    string toLowerCase(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if('A' <= s[i] && s[i] <= 'Z'){
                ans += tolower(s[i]);
            }else{
                ans += s[i];
            }
        }
        return ans;
    }
};