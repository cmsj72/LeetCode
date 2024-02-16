public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        HashSet<int> hs = nums.ToHashSet();
        List<int> list = new(nums.Length - hs.Count);
        for(int i = 1, j = 0; i <= nums.Length; i++){
            if(!hs.Contains(i)){
                list.Add(i);
            }
        }
        return list;
        
    }
}