public class Solution {
    public string ShortestCompletingWord(string licensePlate, string[] words) {
        //  c++ 제일 빠른 속도 코드 기반
        int[] harsh = new int[26];
        foreach(var ch in licensePlate.ToLower()){
            if(Char.IsLetter(ch)){
                ++harsh[ch - 'a'];
            }
        }
        string res = "";
        foreach(var str in words){
            int[] aksh = new int[26];
            foreach(var ch in str){
                ++aksh[ch - 'a'];
            }

            bool complete = true;
            for(int i = 0; i < 26; i++){
                if(aksh[i] < harsh[i]){
                    complete = false;
                    break;
                }
            }
            if(complete && (res.Length == 0 || res.Length > str.Length)){
                res = str;
            }
        }
        return res;
    }
}