public class Solution {
    public int FirstUniqChar(string s) {
        Dictionary<char, int> dic = new Dictionary<char, int>();
        for(int i = 0; i < s.Length; i++){
            if(dic.ContainsKey(s[i])){
                dic[s[i]]++;
            }else{
                dic.Add(s[i], 1);
            }
        }
        for(int i = 0; i < s.Length; i++){
            if(dic[s[i]] == 1)
                return i;
        }
        return -1;
    }
}