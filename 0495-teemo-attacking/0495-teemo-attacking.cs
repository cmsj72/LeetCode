public class Solution {
    public int FindPoisonedDuration(int[] timeSeries, int duration) {
        if(duration == 0) return 0;
        
        int total = 0;
        for(int i = 0; i < timeSeries.Length - 1; i++){
            total += Math.Min(timeSeries[i + 1] - timeSeries[i], duration);
        }
        return total + duration;
    }
}