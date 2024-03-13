public class Solution {
    public int MaxCount(int m, int n, int[][] ops) {
        int minM = m, minN = n;
        foreach(var a in ops){
            minM = Math.Min(minM, a[0]);
            minN = Math.Min(minN, a[1]);
        }
        return minM * minN;
    }
}