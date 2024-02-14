class Solution {
public:
    int countSegments(string s) {
        if(s.length() == 1){
            return s[0] == ' ' ? false : true;
        }
        int ans = 0;
        bool flag;
        for(int i = 0; i < s.length(); i++){
            if(i == s.length() - 1){
                if(flag || s[i] != ' '){
                    ans++;
                }
                break;
            }
            if(s[i] != ' '){
                flag = true;
            }else{
                if(flag){
                    ans++;
                    flag = false;
                }
            }
        }
        return ans;
    }
};