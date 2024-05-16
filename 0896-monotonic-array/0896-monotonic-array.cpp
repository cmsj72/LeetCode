class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size() == 1) return true;
        int n = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] <= nums[i+1]) n++;
        }
        if(n == nums.size() - 1) return true;
        n = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] >= nums[i+1]) n++;
        }
        if(n == nums.size() - 1) return true;
        return false;
    }

    //  ==============================  //
    //  제일 빠른 코드
    // bool isMonotonic(vector<int>& nums) {
    //     cin.tie(0);
    //     ios::sync_with_stdio(0);
    //     return isminc(nums)||ismaxc(nums);
    // }
    // bool isminc(vector<int>& nums){
    //     for (int i=0;i<nums.size()-1;i++){
    //         if (nums[i]>nums[i+1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    // bool ismaxc(vector<int>& nums){
    //     for (int i=0;i<nums.size()-1;i++){
    //         if (nums[i]<nums[i+1]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
};