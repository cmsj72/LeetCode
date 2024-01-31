public class Solution {
    public char FindTheDifference(string s, string t) {
        int c = 0;
        foreach(var cs in s){
            c ^= cs;
        }
        foreach(var ct in t){
            c ^= ct;
        }
        return (char)c;
    }
}