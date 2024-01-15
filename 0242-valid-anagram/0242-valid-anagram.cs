public class Solution {
    public bool IsAnagram(string s, string t) {
        //  https://leetcode.com/problems/valid-anagram/solutions/4410240/three-lines-of-code-by-prodonik-java-c-python-go-js-ruby-c
        //  나는 hashtable을 이용 했지만
        //  이 풀이는 문자열을 정렬해 비교
        char[] ss = s.ToCharArray();
        char[] tt = t.ToCharArray();

        Array.Sort(ss);
        Array.Sort(tt);

        return new string(ss) == new string(tt);
    }
}