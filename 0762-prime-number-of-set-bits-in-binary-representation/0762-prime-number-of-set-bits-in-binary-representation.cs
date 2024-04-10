public class Solution {
    public int CountPrimeSetBits(int left, int right) {
        //  https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/solutions/4064482/c-solution-bit-manipulation-o-n
        HashSet<int> primes = new HashSet<int>(){2,3,5,7,11,13,17,19,23,29,31};
        //  left,right의 범위가 최대 10^6 이기 때문에 최대 32비트 사용
        //  32이하의 소수만 필요
        int count = 0;
        for(int i = left; i <= right; i++){
            int setBits = 0;
            for(int j = 0; j < 32; j++){
                if((i&(1<<j)) != 0){
                    setBits++;
                }
            }

            if(primes.Contains(setBits)){
                count++;
            }
        }
        return count;
    }
}