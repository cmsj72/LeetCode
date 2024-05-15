public class Solution {
    public string[] UncommonFromSentences(string s1, string s2) {
        Dictionary<string, int> dic = new();
        func(s1);
        func(s2);
        List<string> list = new();
        foreach(var p in dic){
            if(p.Value == 1) list.Add(p.Key);
        }
        return list.ToArray();

        void func(string str){
            string[] tmp = str.Split();
            foreach(var s in tmp){
                if(dic.ContainsKey(s)){
                    dic[s]++;
                }else{
                    dic.Add(s,1);
                }
            }
        }
    }
}