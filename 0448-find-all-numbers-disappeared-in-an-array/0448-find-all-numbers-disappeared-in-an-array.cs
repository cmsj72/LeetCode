public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        //  c++에서 본 HashSet을 이용한 방법
        HashSet<int> hs = nums.ToHashSet();
        List<int> list = new(nums.Length - hs.Count);
        for(int i = 1, j = 0; i <= nums.Length; i++){
            if(!hs.Contains(i)){
                list.Add(i);
            }
        }
        return list;
        
        //  ==============================  //
        //  https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/solutions/545609/c-using-o-1-space-o-n-runtime
        for(int i = 0; i < nums.Length; i++){
            int index = Math.Abs(nums[i]) - 1;
            if(nums[index] > 0){
                nums[index] = -nums[index];
            }            
        }
        List<int> result = new List<int>();
            for(int i = 0; i < nums.Length; i++){
                if(nums[i] > 0){
                    result.Add(i+1);
                }
            }
            return result;
    }
}