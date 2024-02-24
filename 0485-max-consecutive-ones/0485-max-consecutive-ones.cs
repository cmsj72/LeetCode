public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int count = 0, max = 0;
        foreach(int n in nums){
            if(n == 1){
                count++;
                if(count > max){
                    max = count;
                }
            }else{
                count = 0;
            }
        }
        return max;
    }
}