class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        deque<int> dq;
        for(int n : nums){
            if(n % 2 == 0){
                dq.push_front(n);
            }else{
                dq.push_back(n);
            }
        }
        vector<int> ans(dq.begin(), dq.end());
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/sort-array-by-parity/solutions/797046/c-fast-and-easy-solution-using-two-pointer-algorithm
        // int j = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] % 2 == 0){
        //         swap(nums[i],nums[j]);
        //         j++;
        //     }
        // }
        // return nums;
    }
};