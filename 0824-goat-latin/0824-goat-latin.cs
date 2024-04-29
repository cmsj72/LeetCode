public class Solution {
    public string ToGoatLatin(string sentence) {
        string[] words = sentence.Split();
        string tail = "maa";
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < words.Length; i++){
            string tmp;
            if(isVowel(words[i][0])){
                tmp = words[i];
            }else{
                tmp = words[i].Substring(1) + words[i][0];
            }
            tmp += tail;
            sb.Append(tmp);
            if(i != words.Length - 1) sb.Append(' ');
            tail += 'a';
        }
        return sb.ToString();
        
        bool isVowel(char c){
            return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')
            || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
        }
    }
}