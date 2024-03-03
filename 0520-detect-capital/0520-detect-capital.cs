public class Solution {
    public bool DetectCapitalUse(string word) {
        //  https://leetcode.com/problems/detect-capital/solutions/2984184/c-one-line
        //  All : https://ibocon.tistory.com/106
        //  char.IsUppder, .IsLower : https://ks-factory.tistory.com/118#google_vignette
        return word.All(char.IsUpper) || word.Skip(1).All(char.IsLower);
    }
}