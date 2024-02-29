public class Solution {
    public string ConvertToBase7(int num) {
        //  https://leetcode.com/problems/base-7/solutions/3566784/simple-solution-c-100-efficient
        if(num > -7 && num < 7){
            return num.ToString();
        }

        StringBuilder sb = new StringBuilder();
        int n = Math.Abs(num);
        int rem = 0;
        while(n > 0){
            rem = n % 7;
            n /= 7;
            sb.Insert(0, rem);
        }

        if(num < 0){
            sb.Insert(0, "-");
        }
        return sb.ToString();
    }
}