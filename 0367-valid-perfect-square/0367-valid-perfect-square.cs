public class Solution {
    public bool IsPerfectSquare(int num) {
        for(uint i = 1; i * i <= num; i++){
            if(i*i == num)
                return true;
        }
        return false;

        //  ==========================
        //  https://leetcode.com/problems/valid-perfect-square/solutions/4617203/binary-search-approach-c
        // long left = 0;
        // long right = num;
        // while(left <= right){
        //     long mid = left + (right - left) / 2;
        //     if(mid * mid == num){
        //         return true;
        //     }else if(mid*mid < num){
        //         left = mid + 1;
        //     }else{
        //         right = mid - 1;
        //     }
        // }
        // return false;
    }
}