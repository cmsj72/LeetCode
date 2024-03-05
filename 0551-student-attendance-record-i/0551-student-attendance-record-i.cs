public class Solution {
    public bool CheckRecord(string s) {
        //  https://leetcode.com/problems/student-attendance-record-i/solutions/3697169/c-simple-one-liner-with-linq
        return s.Count(x=> x == 'A') < 2 && !s.Contains("LLL");
    }
}