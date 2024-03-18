public class Solution {
    public int[] FindErrorNums(int[] nums) {
        //  https://leetcode.com/problems/set-mismatch/solutions/4607650/easy-array-solution-a-simple-solution-for-beginners
        int duplicate = 0, missing = 0;
        
        int[] count = new int[nums.Length + 1];
        count[nums[0]] += 1;
        for(int i = 1; i < nums.Length; i++)
            count[nums[i]] += 1;
        
        for(int j = 1; j < count.Length; j++){
            if(count[j] > 1){
                duplicate = j;
            }
            if(count[j] == 0){
                missing = j;
            }
        }
        return new int[]{duplicate, missing};
    }
}