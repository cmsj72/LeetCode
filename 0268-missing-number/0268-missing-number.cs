public class Solution {
    public int MissingNumber(int[] nums) {
        //  배열의 요소의 합을 구해주는 함수
        int sum = nums.Sum();
        int n = nums.Length;
        return n * (n + 1) / 2 - sum;
        //  sum, n 변수 선언하지않고 한줄로도 가능

        // =======================================
        
        // //  https://leetcode.com/problems/missing-number/solutions/2082716/bitwise-solution-with-xor-and-no-summing-explained

        // int x = nums.Length;

        // for(int i = 0; i < nums.Length; i++){
        //     Console.Write("{0}-", x);
        //     //x^=i^nums[i];
        //     x = x ^ i ^ nums[i];
        //     Console.WriteLine(x);
        // }
        // //  (a ^ b) ^ b = a
        // //  (a ^ c) ^ b = (a ^ b) ^ c
        // //  a ^ a = 0
        // //  0 ^ a = a

        // //  ex) Case1
        // //  nums.Length = 3;
        // //  i = 0 => 3(=x) ^ 0 ^ 3
        // //  i = 1 => x ^ 1 ^ 0
        // //  i = 2 => x ^ 2 ^ 1
        // //  => 3(=x) ^ 0 ^ 3 ^ 1 ^ 0 ^ 2 ^ 1
        // //  => (3 ^ 3) ^ (0 ^ 0) ^ (1 ^ 1) ^ 2
        // return x;
    }
}