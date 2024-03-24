class Solution {
public:
    bool func(int left, int right, string s){
        while(left < right){
            if(s[left] == s[right]){
                left++, right--;
            }else{
                return false;
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(s.size() == 1) return true;
        cout << s.size() << endl;
        int left = 0;
        int right = s.size() - 1;
        while(left < right){
            if(s[left] == s[right]){
                left++, right--;
            }else if(func(left+1, right, s) || func(left, right - 1, s)){
                break;
            }else{
                return false;
            }
        }
        return true;
    }
};