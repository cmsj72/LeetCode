class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> vec;
        while(n > 0){
            vec.push_back(n % 2);
            n /= 2;
        }
        for(int i = 0; i < vec.size() - 1; i++){
            if(vec[i] == vec[i+1]){
                return false;
            }
        }
        return true;
        //  ==============================  //
        //  https://leetcode.com/problems/binary-number-with-alternating-bits/solutions/2343590/microsoft-sde-1-interview-optimized-soln
        //  1.  Using Math logic
        // long x = 1;
        // while(x <= n){
        //     if(x == n)
        //         return true;
        //     else if(x%2==0)
        //         x=2*x+1;
        //     else
        //         x=2*x;
        // }
        // return false;

        // //  2.  Using Bit-Manipulation
        // int flag1,flag2;
        // while(n){
        //     flag1=n&1;
        //     if(flag1==flag2)
        //         return 0;
        //     n = n >> 1;
        //     flag2 = flag1;
        // }
        // return 1;
    }
};