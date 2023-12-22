public class Solution {
    public int MajorityElement(int[] nums) {
        //  풀이 방법
        //  https://leetcode.com/problems/majority-element/solutions/3133635/c-solution/

        //  보이어-무르 과반수 투표 알고리즘
        //  https://sgc109.github.io/2020/11/30/boyer-moore-majority-vote-algorithm/
        int count = 0;
        int? candidate = null;

        foreach(int num in nums){
            if(count == 0) candidate = num;
            count += (num == candidate) ? 1 : -1;
            Console.WriteLine(count);
        }

        return candidate.Value;
    }
}