class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(int i = 0; i < s.length(); i++){
            if('A' <= s[i] && s[i] <= 'Z'){
                str += tolower(s[i]);
            }else if(('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')){
                str += s[i];
            }
        }
        int left = 0;
        int right = str.length() - 1;
        while(left < right){
            if(str[left] != str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};