public class Solution {
    public char NextGreatestLetter(char[] letters, char target) {
        foreach(char c in letters){
            if(c > target) return c;
        }
        return letters[0];
    }
}