public class Solution {
    public int Search(int[] nums, int target) {
        //  https://leetcode.com/problems/binary-search/solutions/1884717/two-solutions-own-binary-search-vs-the-built-in-one
        int i = Array.BinarySearch(nums, target);
        return (i < 0) ? -1 : i;
    }
}