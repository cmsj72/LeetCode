class Solution {
public:
    int fib(int n) {
        int arr[31];
        arr[0] = 0;
        arr[1] = 1;
        for(int i = 2; i <= n; i++){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        return arr[n];
        
        //  ==============================  //
        //  https://leetcode.com/problems/fibonacci-number/solutions/3013873/dynamic-programming-memoization-tabulation-space-optimization-techniques
        //  Using Resursion
        // if(n <= 1) return n;
        // return fib(n-1)+fib(n-2);

        //  Iterative Solution / Space Optimized Soln.
        if(n <= 1) return n;
        int prev2 = 0;
        int prev = 1;
        for(int i = 2; i <= n; i++){
            int curr_i = prev2 + prev;
            prev2 = prev2;
            prev = curr_i;
        }

    }
};