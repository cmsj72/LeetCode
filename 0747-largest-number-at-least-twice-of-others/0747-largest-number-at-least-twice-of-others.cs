public class Solution {
    public int DominantIndex(int[] nums) {
        //  https://leetcode.com/problems/largest-number-at-least-twice-of-others/solutions/2865024/c-simple-solution-beats-97-24
        int max = nums.Max();
        for(int i = 0; i < nums.Length; i++){
            if(nums[i] != max && nums[i] * 2 > max) return -1;
        }
        return Array.IndexOf(nums, max);
    }
}