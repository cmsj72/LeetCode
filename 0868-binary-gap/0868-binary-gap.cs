public class Solution {
    public int BinaryGap(int n) {
        //  https://leetcode.com/problems/binary-gap/solutions/3181929/beats-98-easy-solution-please-upvote
        int last = -1, ans = 0;
        for(int i = 0; i < 32; i++){
            if(((n >> i) & 1) > 0){
                if(last >= 0){
                    ans = Math.Max(ans, i - last);
                }
                last = i;
            }
        }

        return ans;
    }
}