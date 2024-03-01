public class Solution {
    public string[] FindRelativeRanks(int[] score) {
        //  https://leetcode.com/problems/relative-ranks/solutions/3857694/c-solution-priorityqueue-o-nlogn
        //  https://learn.microsoft.com/ko-kr/dotnet/api/system.collections.generic.priorityqueue-2?view=net-8.0
        int n = score.Length;
        PriorityQueue<int, int> pq = new(); 
        string[] ans = new string[n];
        for(int index = 0; index < n; ++index){
            pq.Enqueue(index, -score[index]);
        }
        if(pq.Count > 0){
            ans[pq.Dequeue()] = "Gold Medal";
        }

        if(pq.Count > 0){
            ans[pq.Dequeue()] = "Silver Medal";
        }
        
        if(pq.Count > 0){
            ans[pq.Dequeue()] = "Bronze Medal";
        }
        
        for(int i=4; pq.Count > 0; i++){
            //  https://learn.microsoft.com/ko-kr/dotnet/csharp/language-reference/tokens/interpolated
            //  res[pq.Dequeue()] = $"{i}";
            ans[pq.Dequeue()] = i.ToString();
        }
        return ans;
    }
}