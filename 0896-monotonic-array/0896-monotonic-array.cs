public class Solution {
    public bool IsMonotonic(int[] nums) {
        //  https://leetcode.com/problems/monotonic-array/solutions/4102869/95-15-single-pass-check
        if(nums.Length < 2) return true;

        int direction = 0;

        for(int i = 1; i < nums.Length; i++){
            if(nums[i] > nums[i-1]){
                if(direction == 0) direction = 1;
                else if(direction == -1) return false;
            }else if(nums[i] < nums[i-1]){
                if(direction == 0) direction = -1;
                else if(direction == 1) return false;
            }
        }

        return true;
    }
}