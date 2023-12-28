public class Solution {
    //  https://leetcode.com/problems/happy-number/solutions/56917/my-solution-in-c-o-1-space-and-no-magic-math-property-involved/
    //  플루이드의 주기 감지 알고리즘을 이용한 방법
    
    //  각 자리수의 제곱의 합을 구하는 메서드
    // int digitSquareSum(int n){
    //     int sum = 0, tmp;
    //     while(n){
    //         tmp = n % 10;
    //         sum += tmp * tmp;
    //         n /= 10;
    //     }
    //     return sum;
    // }

    // public bool IsHappy(int n) {
    //     int slow, fast;
    //     slow = fast = n;
    //     do{
    //         //  slow는 한번 계산
    //         slow = digitSquareSum(slow);

    //         //  fast는 두 번 계산하여 slow보다 2배 이동
    //         fast = digitSquareSum(fast);
    //         fast = digitSquareSum(fast);
    //     }while(slow != fast);
    //     if(slow == 1) return true;
    //     else return false;
    // }

    //===========================================

    public bool IsHappy(int n) {
        HashSet<int> inLoop = new HashSet<int>();
        int squareSum, remain;
        while(inLoop.Add(n)){
            squareSum = 0;
            while(n > 0){
                remain = n % 10;
                squareSum += remain*remain;
                n /= 10;
            }
            if(squareSum == 1)
                return true;
            else
                n = squareSum;
        }
        return false;
    }
}