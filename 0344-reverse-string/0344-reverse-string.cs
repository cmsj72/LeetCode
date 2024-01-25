public class Solution {
    public void ReverseString(char[] s) {
        for(int i = 0; i < s.Length/2; i++){
            //  https://hiperzstudio.tistory.com/32
            //  C# 7.0 이상부터 지원하는 튜플 형식
            (s[i], s[s.Length - 1 - i]) = (s[s.Length - 1 - i], s[i]);
        }
    }
}