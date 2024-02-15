public class Solution {
    public int ArrangeCoins(int n) {
        int i = 0;
        for( ; n >= 0; n -= ++i);
        return i - 1;
    }
}