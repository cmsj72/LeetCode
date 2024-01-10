public class Solution {
    public bool IsPowerOfTwo(int n) {
        //  https://leetcode.com/problems/power-of-two/solutions/3430397/simplest-c-solution-99-efficient
        //  숫자가 2의 제곱수 인 경우 이진수로 하나의 비트만 1이고 나머지는 0이된다
        //  ex) 8 -> 1000
        //  따라서 'n'과 'n-1'에 대해 비트별 and를 수행하면 값은 0이 되어야 한다
        //  ex) 8 -> 1000 및 7 -> 0111 => (8 & 7) == 0
        if(n <= 0)
            return false;

        return ((n & (n-1)) == 0);
    }
}