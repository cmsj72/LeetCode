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
    }
};