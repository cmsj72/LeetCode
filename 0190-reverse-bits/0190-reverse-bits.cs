public class Solution {
    public uint reverseBits(uint n) {
        //  https://leetcode.com/problems/reverse-bits/solutions/3032438/easy-to-understand-solution-bitwise-operation-c-solution/
        //  c++ 풀이랑 다른 풀이가 있지만 chunk? 아직 잘 모르겠음...
        //  c++에서는 0을 or 연산해서 검출했지만
        //  1을 and 연산해서 검출하는 방법도 있다.
        uint res = 0;
        for(int i = 0; i < 32; i++){
            //  오른쪽 제일 끝 첫자리 검출
            uint lsb = n & 1;
            //  왼쪽으로 시프트
            uint lsb_reverse = lsb<<(31-i);
            //  결과를 합치고
            res = res | lsb_reverse;
            //  n을 오른쪽으로 시프트
            n=n>>1;
        }
        return res;
    }
}