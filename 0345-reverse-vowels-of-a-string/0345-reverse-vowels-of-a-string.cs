public class Solution {
    public string ReverseVowels(string s) {
        //  C++에서 내가 푼 방법과 다른 풀이인 솔루션 참고해서 작성한 코드
        string vowels = "aeiouAEIOU";
        int start = 0;
        int end = s.Length - 1;
        StringBuilder sb = new StringBuilder(s);
        while(start < end){
            while(start <end && vowels.IndexOf(sb[start]) == -1){
                start++;
            }
            while(start <end && vowels.IndexOf(sb[end]) == -1){
                end--;
            }
            char tmp = sb[start];
            sb[start] = sb[end];
            sb[end] = tmp;
            start++; 
            end--;
        }
        return sb.ToString();
        
        //  ============================
        //  https://leetcode.com/problems/reverse-vowels-of-a-string/solutions/3669092/easy-solution-with-stack
//         var str = new StringBuilder();
//         var l = new Stack<char>();

//         foreach(var i in s){
//             //  모음이 있으면 스택에 push
//             if("aeiouAEIOU".Contains(i)){
//                 l.Push(i);
//             }
//         }

//         foreach(var i in s){
//             //  모음이 있으면 스택에서 pop
//             //  LIFO 구조이기 때문에 s의 뒤쪽 모음부터 
//             //  str에 append한다
//             if("aeiouAEIOU".Contains(i)){
//                 str.Apeend(l.Pop());
//             }else{
//                 str.Append(i);
//             }
//         }

//         return str.ToString();
    }
}