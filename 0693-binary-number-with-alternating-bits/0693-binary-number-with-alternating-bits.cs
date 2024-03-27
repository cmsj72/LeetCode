public class Solution {
    public bool HasAlternatingBits(int n) {
        //  c++에서 본 솔루션 방법
        long x = 1;
        while(x <= n){
            if(x == n){
                return true;
            }else if(x % 2 == 0){
                x = 2*x + 1;
            }else{
                x=2*x;
            }
        }
        return false;
        //  https://leetcode.com/problems/binary-number-with-alternating-bits/solutions/4644329/faster-than-97
        // string  bin = Convert.ToString(n,2);
        // for(int i = 0; i < bin.Length; i++){
        //     if(i % 2 == bin[i] - '0')
        //         return false;
        // }
        // return true;
    }
}