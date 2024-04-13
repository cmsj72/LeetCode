public class Solution {
    public int UniqueMorseRepresentations(string[] words) {
        string[] mCode = {".-","-...","-.-.","-..",".","..-.","--."
            ,"....","..",".---","-.-",".-..","--","-.","---",".--."
            ,"--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        SortedSet<string> st = new();
        foreach(string s in words){
            StringBuilder sb = new();
            foreach(char c in s){
                sb.Append(mCode[c - 'a']);
            }
            st.Add(sb.ToString());
        }
        return st.Count;
    }
}