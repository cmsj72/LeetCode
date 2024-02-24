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
        //  ==============================  //
        //  https://leetcode.com/problems/max-consecutive-ones/solutions/2856630/c-beats-84-4-easy-solution
        int res = 0, temp = 0;
        for(int i = 0; i < nums.Length; i++){
            if(nums[i] == 0){
                res = Math.Max(res, temp);
                temp = 0;
            }else{
                temp++;
            }
        }
        return Math.Max(res, temp);
    }
}