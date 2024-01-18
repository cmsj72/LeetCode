public class Solution {
    public int AddDigits(int num) {
        while(num > 9){
            var sum = 0;
            while(num > 0){
                sum += num % 10;
                num /= 10;
            }
            num = sum;
        }
        return num;

        //  ==========================
        // //  https://leetcode.com/problems/add-digits/solutions/4488513/very-easy-100-add-digits-beats-100-with-explaination
        // //  https://velog.io/@timevoyage/leetcode-258-Add-Digits
        // if(num == 0)
        //     return num;
        // return (num % 9) == 0 ? 9 : num % 9;
    }
}