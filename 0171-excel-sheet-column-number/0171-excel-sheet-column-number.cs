public class Solution {
    public int TitleToNumber(string columnTitle) {
        int ans = 0;
        foreach(char c in columnTitle){
            ans *= 26;
            ans += c - 'A' + 1;
        }
        return ans;
    }
}