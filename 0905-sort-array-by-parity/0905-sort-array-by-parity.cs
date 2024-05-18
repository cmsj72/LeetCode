public class Solution {
    public int[] SortArrayByParity(int[] nums) {
        int j = 0;
        for(int i = 0; i < nums.Length; i++){
            if(nums[i] % 2 == 0){
                (nums[i], nums[j]) = (nums[j], nums[i]);
                j++;
            }
        }
        return nums;
    }
}