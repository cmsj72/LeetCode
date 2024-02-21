public class Solution {
    public int HammingDistance(int x, int y) {
        int num = x ^ y;
        int count = 0;
        while(num > 0){
            count += (num & 1);
            num = num >> 1;
        }
        return count;

        //  ==============================  //
        //  https://leetcode.com/problems/hamming-distance/solutions/4600448/easy-1-line-solution
        return Convert.ToString(x ^ y, 2).Where(l => l == '1').Count();
    }
}