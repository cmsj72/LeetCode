public class Solution {
    public bool RotateString(string s, string goal) {
        if(s.Length != goal.Length) return false;
        string tmp = s + s;
        return tmp.Contains(goal);
    }
}