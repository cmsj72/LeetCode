public class Solution {
    //  https://leetcode.com/problems/shortest-distance-to-a-character/solutions/4974898/java-javascript-typescript-c-c-kotlin-solution
    private int[] shortestDistanceToPivot;

    public int[] ShortestToChar(string s, char c) {
        shortestDistanceToPivot = new int[s.Length];
        Array.Fill(shortestDistanceToPivot, s.Length);

        FillShortestDistanceToPivot(0, s, c);
        FillShortestDistanceToPivot(s.Length - 1, s, c);
        return shortestDistanceToPivot;        
    }

    void FillShortestDistanceToPivot(int startIndex, String input, char pivot){
        int end = (startIndex == 0) ? input.Length : -1;
        int step = (startIndex == 0) ? 1 : -1;
        int distance = input.Length;

        for(int i = startIndex; i != end; i += step){
            distance = (input[i] == pivot) ? 0 : distance + 1;
            shortestDistanceToPivot[i] = Math.Min(distance, shortestDistanceToPivot[i]);           
        }
    }
}