class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if((i % 2 == 0 && nums[i] % 2 == 1) || (i % 2 == 1 && nums[i] % 2 == 0)){
                for(int j = i + 1; j < nums.size(); j++){
                    if((i % 2 == 0 && nums[j] % 2 == 0) || (i % 2 == 1 && nums[j] % 2 == 1)){
                        swap(nums[i], nums[j]);
                    }
                }
            }
        }
        return nums;

        //  ==============================  //
        //  https://leetcode.com/problems/sort-array-by-parity-ii/solutions/1490847/c-two-pointers-solution
        // int n = nums.size();
        // int i = 0, j = 1;
        // while(i < n && j < n){
        //     if(nums[i] % 2 == 0){
        //         i += 2;
        //     }
        //     else if(nums[j] % 2 == 1){
        //         j += 2;
        //     }
        //     else{
        //         swap(nums[i], nums[j]);
        //     }
        // }
        // return nums;
    }
};