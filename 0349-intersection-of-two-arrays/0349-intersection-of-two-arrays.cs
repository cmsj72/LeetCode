public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
        List<int> list = new List<int>();
        for(int i = 0; i < nums1.Length; i++){
            if(nums2.Contains(nums1[i]) && !list.Contains(nums1[i])){
                list.Add(nums1[i]);
            }
        }
        return list.ToArray();
        //  ===================
        //  https://leetcode.com/problems/intersection-of-two-arrays/solutions/3630182/easy-approach-one-line-code-linq
        //  https://learn.microsoft.com/ko-kr/dotnet/api/system.linq.enumerable.intersect?view=net-8.0
        // return nums1.Intersect(nums2).ToArray();
    }
}