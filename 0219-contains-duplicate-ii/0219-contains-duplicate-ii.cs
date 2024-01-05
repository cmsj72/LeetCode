public class Solution {
    public bool ContainsNearbyDuplicate(int[] nums, int k) {
        //  Dictionary를 이용한 방법
        // Dictionary<int, int> map = new Dictionary<int, int>();
        // for(int i = 0; i < nums.Length; i++){
        //     if(map.ContainsKey(nums[i]) && Math.Abs(map[nums[i]] - i) <= k){
        //         return true;
        //     }
        //     map[nums[i]] = i;
        // }
        // return false;

        //  sliding Window
        for(int i = 0; i < nums.Length; i++){
            int j = i + 1;
            while(j < nums.Length && j - i <= k){
                if(nums[i] == nums[j]){
                    return true;
                }
                j++;
            }
        }
        return false;
    }
}