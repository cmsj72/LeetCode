public class Solution {
    public int[] CountBits(int n) {
        //  https://leetcode.com/problems/counting-bits/solutions/3986178/97-97-dp-bit-manipulation-offset
        //  방법 자체는 c++에서 본 솔루션 방법
        //  주석되있는식은 같은 결과지만 비트 연산을 이용한 다른 방법
        int[] ans = new int[n+1];
        ans[0] = 0;
        for(int i = 1; i <= n; i++){
            ans[i] = ans[i/2] + i%2;
            //  ans[i] = ans[i >> 2] + (i & 1)
        }
        return ans;
    }
}