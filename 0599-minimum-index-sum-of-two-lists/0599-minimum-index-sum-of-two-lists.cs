public class Solution {
    public string[] FindRestaurant(string[] list1, string[] list2) {
        //  Editorial
        //  1.  Using HashMap
        // Dictionary<int, List<string>> dic = new();
        // for(int i = 0; i < list1.Length; i++){
        //     for(int j = 0; j < list2.Length; j++){
        //         if(list1[i] == list2[j]){
        //             if(!dic.ContainsKey(i + j))
        //                 dic.Add(i+j, new List<string>());
        //             dic[i+j].Add(list1[i]);
        //         }
        //     }
        // }
        // int min_index_sum = Int32.MaxValue;
        // foreach(KeyValuePair<int, List<string>> p in dic){
        //     min_index_sum = Math.Min(min_index_sum, p.Key);
        // }
        // return dic[min_index_sum].ToArray();

        //  2.  Without Using HashMap
        // List<string> list = new();
        // for(int sum = 0; sum < list1.Length + list2.Length - 1; sum++){
        //     for(int i = 0; i <= sum; i++){
        //         if(i < list1.Length && sum - i < list2.Length && list1[i] == list2[sum - i])
        //             list.Add(list1[i]);
        //     }
        //     if(list.Count > 0)
        //         break;
        // }
        // return list.ToArray();

        //  3.  Using HashMap(liner)
        Dictionary<string, int> dic = new();
        for(int i = 0; i < list1.Length; i++){
            dic.Add(list1[i],i);
        }
        List<string> list = new();
        int min_sum = Int32.MaxValue, sum;
        for(int j = 0; j < list2.Length && j <= min_sum; j++){
            if(dic.ContainsKey(list2[j])){
                sum = j + dic[list2[j]];
                if(sum < min_sum){
                    list.Clear();
                    list.Add(list2[j]);
                    min_sum = sum;
                }else if(sum == min_sum){
                    list.Add(list2[j]);
                }
            }
        }
        return list.ToArray();
    }
}