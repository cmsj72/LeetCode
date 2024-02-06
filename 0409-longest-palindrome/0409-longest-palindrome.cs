public class Solution {
    public int LongestPalindrome(string s) {
        //  C++에서 본 솔루션 방법
        // int oddCount = 0;
        // Dictionary<char, int> dic = new Dictionary<char, int>();
        // foreach(var c in s){
        //     if(dic.ContainsKey(c)){
        //         dic[c]++;                
        //     }else{
        //         dic.Add(c, 1);
        //     }
        //     if(dic[c] % 2 == 1) 
        //         oddCount++;
        //     else
        //         oddCount--;
        // }
        // if(oddCount > 1)
        //     return s.Length - oddCount + 1;
        // return s.Length;

        //  ============================

        //  https://leetcode.com/problems/longest-palindrome/solutions/2985340/well-explained-c-solution-array-for-loop
        // int[] arr = new int[123];// 65 ~ 90 : 대문자의 아스키코드 , 97 ~ 122 : 소문자의 아스키코드
        // foreach(char ch in s){
        //     arr[ch]++;
        // }
        // int ans = 0;
        // foreach(int val in arr){
        //     //  val이 0이거나 1인 경우 / 2를 할 경우 0이 되고
        //     //  1보다 큰 수이면 0이 아니다
        //     //  그 후 *2를 하면 짝수는 실제 발생 횟수가 나오고, 홀수의 경우 1적은 횟수를 반환하고
        //     //  이를 ans에 더한다
        //     ans += (val / 2) * 2;

        //     //  ans가 짝수이면 회문에 단일 문자를 더하지 않은 것이고
        //     //  val이 홀수이면 우리가 단일 문자 하나를 더할 수 있따는 의미로 ans를 하나 증가시키는 것이 좋다
        //     //  만약 두 조건다 만족하면 ans를 증가시키고, 
        //     //  이후부터는 단일 중앙 문자의 개수를 고려했음을 지정하는 홀수가 됩니다.
        //     if(ans % 2 == 0 && val % 2 == 1){
        //         ans++;
        //         Console.WriteLine("{0}, {1}", ans, val);
        //     }
        // }
        // return ans;

        //  ============================
        //  https://leetcode.com/problems/longest-palindrome/solutions/3119881/simplest-solution-using-hashset

        //  짝수개의 문자를 가진 회문에서는 각자 짝이 있다(pair). HashSet을 이용해 같은 문자를 추가하고 제거할 수 있고,
        //  제거할 때 전체 길이는 2 늘어 난다.

        //  만약 set이 empty가 아닐 때 얼마나 많은 유일한 문자가 남더라도("a" 또는 "a,b,c"가 될 수도 있다)
        //  회문을 만들 때 그것중 아무거나 고를 수있고 고른 문자를 이용해 회문을 만들 수 있다(pair가 없다)
        //  그것이 마지막에 1을 더하는 이유이다.
        var set = new HashSet<char>();
        var maxLength = 0;

        foreach(var c in s){
            if(set.Contains(c)){
                set.Remove(c);
                maxLength += 2;
            }else{
                set.Add(c);
            }
        }

        return set.Count > 0 ? maxLength + 1 : maxLength;

        //  ============================
        //  다른 방법이 더 있지만 대표적으로 2가지만 넣었다.
    }
}