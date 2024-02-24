class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int left = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                ans = max(ans, i - left - 1);
                left = i;
            }
        }
        int n = nums.size();
        ans = max(ans,  n - 1 - left);
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/max-consecutive-ones/solutions/3453972/max-consecutive-ones-solution-in-c
        // int i, count = 0;, max = 0;
        // for(i = 0; i < nums.size(); i++){
        //     if(nums[i] == 1){
        //         count++;
        //         if(count > max){
        //             max = count;
        //         }
        //     }else{
        //         count = 0;
        //     }
        // }
        // return max;
    }
};