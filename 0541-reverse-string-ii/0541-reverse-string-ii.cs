public class Solution {
    public string ReverseStr(string s, int k) {
        //  https://leetcode.com/problems/reverse-string-ii/solutions/3218125/c-simple-solution
        var charArr = s.ToCharArray();

        for(int i = 0; i < s.Length; i += 2 * k){
            int revLen = Math.Min(k, s.Length - i);
            Array.Reverse(charArr, i, revLen);
        }

        return new string(charArr);
    }
}