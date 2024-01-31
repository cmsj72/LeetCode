public class Solution {
    public bool IsSubsequence(string s, string t) {
        //  https://leetcode.com/problems/is-subsequence/solutions/4074367/93-76-two-pointers-dp
        //  c++에서 본 풀이랑 사실상 같음
        int i = 0, j = 0;
        while(i < s.Length && j < t.Length){
            if(s[i] == t[j]){
                i++;
            }
            j++;
        }
        return i == s.Length;
    }
}