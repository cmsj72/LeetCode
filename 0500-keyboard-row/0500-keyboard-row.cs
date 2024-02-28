public class Solution {
    public string[] FindWords(string[] words) {
        //  c++에서 본 솔루션 방법
        HashSet<char> set1 = new HashSet<char>(){'q','w','e','r','t','y','u','i','o','p'};
        HashSet<char> set2 = new HashSet<char>(){'a','s','d','f','g','h','j','k','l'};
        HashSet<char> set3 = new HashSet<char>(){'z','x','c','v','b','n','m'};
        List<string> ans = new List<string>();
        foreach(string s in words){
            bool flag = true;
            HashSet<char> setTemp = new();
            string tmp = s.ToLower();
            if(set1.Contains(tmp[0])){
                setTemp = set1;
            }else if(set2.Contains(tmp[0])){
                setTemp = set2;
            }else{
                setTemp = set3;
            }
            foreach(char c in tmp){
                if(setTemp.Contains(c) == false){
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans.Add(s);
        }
        
        return ans.ToArray();

        //  ==============================  //
        //  https://leetcode.com/problems/keyboard-row/solutions/3629085/c-easy-approach-runtime-beats-99-44-memory-beats-81-67
        // var result = new List<string>();
        // var row1 = new HashSet<char>() { 'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', 'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P' };
        // var row2 = new HashSet<char>() { 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L' };
        // var row3 = new HashSet<char>() { 'z', 'x', 'c', 'v', 'b', 'n', 'm', 'Z', 'X', 'C', 'V', 'B', 'N', 'M' };
        // foreach (var word in words)
        // {
        //     var letters = word.ToHashSet<char>();
        //     //  IsSubsetOf : https://learn.microsoft.com/en-us/dotnet/api/system.collections.generic.hashset-1.issubsetof?view=net-8.0
        //     //  A.IsSubsetOf(B) : A가 B의 부분집합인지를 확인하는 함수
        //     if(letters.IsSubsetOf(row1)||letters.IsSubsetOf(row2)||letters.IsSubsetOf(row3))
        //     {
        //         result.Add(word);   
        //     }
        // }
        // return result.ToArray();
    }
}