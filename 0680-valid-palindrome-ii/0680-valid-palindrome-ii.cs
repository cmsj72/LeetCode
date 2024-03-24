public class Solution {
    public bool func(string s){
        for(int i = 0; i < s.Length / 2; i++){
            if(s[i] != s[s.Length - 1 - i]){
                return false;
            }
        }
        return true;
    }
    
    public bool ValidPalindrome(string s) {
        for(int i = 0; i < s.Length / 2; i++){
            if(s[i] != s[s.Length - 1 - i]){
                string left = s.Remove(i,1), right = s.Remove(s.Length - 1 - i, 1);
                return func(left) || func(right);
            }
        }
        return true;
    }
}