public class Solution {
    public bool IsPalindrome(string s) {
        StringBuilder sb = new StringBuilder();
        foreach(char c in s.ToLower()){
            if(('a' <= c && c <= 'z') || ('0' <= c && c <= '9')){
                sb.Append(c);
            }
        }
        s = sb.ToString();
        //Console.WriteLine(sb.ToString());
        int left = 0;
        int right = s.Length - 1;
        while(left < right){
            if(s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }        
        return true;
    }
}