public class Solution {
    public bool RepeatedSubstringPattern(string s) {
        //  c++에서 본 풀이 방법
        string doubled = s + s;
        string str = doubled.Substring(1, doubled.Length - 2);
        return str.Contains(s);
    }
}