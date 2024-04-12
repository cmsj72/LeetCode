public class Solution {
    public int NumJewelsInStones(string jewels, string stones) {
        int sum = 0;
        char[] stone = stones.ToCharArray();
        foreach(char c in jewels){
            char[] result = Array.FindAll(stone, x => x == c);
            sum += result.Length;
        }
        return sum;
    }
}