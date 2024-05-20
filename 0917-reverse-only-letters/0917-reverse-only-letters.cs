public class Solution {
    public string ReverseOnlyLetters(string s) {
        //  https://leetcode.com/problems/reverse-only-letters/solutions/4553894/c-easy-and-readable-solution-faster-than-96
        StringBuilder sb = new();
        for(int i = s.Length - 1; i >= 0; i--){
            while(sb.Length < s.Length && !IsLetter(s[sb.Length])){
                sb.Append(s[sb.Length]);
            }
            if(IsLetter(s[i])){
                sb.Append(s[i]);
            }
            while(sb.Length < s.Length && !IsLetter(s[sb.Length])){
                sb.Append(s[sb.Length]);
            }
        }
        return sb.ToString();
    }

    //  https://mathmakeworld.tistory.com/89
    private bool IsLetter(in char ch){
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
    }
}