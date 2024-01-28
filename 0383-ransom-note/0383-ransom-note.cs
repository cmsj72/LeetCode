public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        Dictionary<char,int> dic = new Dictionary<char,int>();
        foreach(var c in magazine){
            if(!dic.ContainsKey(c)){
                dic.Add(c,1);
            }else{
                dic[c]++;
            }
        }
        foreach(var c in ransomNote){
            if(dic.ContainsKey(c) && dic[c] > 0){
                dic[c]--;
            }else{
                return false;
            }
        }
        return true;
    }
}