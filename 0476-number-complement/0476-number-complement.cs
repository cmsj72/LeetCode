public class Solution {
    public int FindComplement(int num) {
        //  https://leetcode.com/problems/number-complement/solutions/2848354/c-o-1-o-1
        //  제일 낮은 비트부터 xor 연산을 하면서 비트 자리를 시프트하면서 바꾼다
        for(var i = 0; (1 << i) <= num && i < 31; i++){
            num = num ^ (1 << i);
        }
        return num;
    }
}