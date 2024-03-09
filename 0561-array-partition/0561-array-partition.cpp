class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i += 2){
            ans += min(nums[i], nums[i+1]);
        }
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/array-partition/solutions/2583876/c-easy-understanding-solution
        //  정렬을 했으면 굳이 min을 사용해서 비교할 필요가 없다
        sort(nums.begin(),nums.end());
        int maxsum = 0;
        for(int i = 0 ; i<nums.size(); i= i +2){
            maxsum = maxsum+nums[i];
        }
        return maxsum;
    }
};