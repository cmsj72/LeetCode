public class Solution {
    public string ReverseWords(string s) {
        //  https://leetcode.com/problems/reverse-words-in-a-string-iii/solutions/4111458/91-55-easy-solution-reverse-join
        string[] words = s.Split();
        string[] reverseWords = new string[words.Length];
        for(int i = 0; i < words.Length; i++){
            char[] wordChars = words[i].ToCharArray();
            Array.Reverse(wordChars);
            reverseWords[i] = new string(wordChars);
        }
        //  https://learn.microsoft.com/ko-kr/dotnet/api/system.string.join?view=net-8.0
        return string.Join(" ", reverseWords);
    }
}