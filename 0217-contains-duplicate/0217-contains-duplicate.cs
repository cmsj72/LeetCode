public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        //  https://leetcode.com/problems/contains-duplicate/solutions/1836662/faster-than-97-easy-to-read-one-liner/
        //  nums를 이용해 만든 HashSet의 Count가 nums.Length 보다 작으면 중복되는 원소가 있다는 뜻 => true 반환
        //  같으면 없다는 뜻 => false 반환
        return new HashSet<int>(nums).Count < nums.Length;
    }
}