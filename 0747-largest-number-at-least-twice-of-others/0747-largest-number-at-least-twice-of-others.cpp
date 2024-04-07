class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp.insert({nums[i] * -1, i});
        }
        map<int, int>::iterator it = mp.begin();
        int num1, num2, num1Index;
        num1 = -1 * it->first, num1Index = it->second;
        it++;
        num2 = -1 * it->first;
        if (num1 >= num2 * 2) {
            return num1Index;
        }
        return -1;

        //  ==============================  //
        //  https://leetcode.com/problems/largest-number-at-least-twice-of-others/solutions/754183/c-single-pass-solution-0-ms-solution-100-00-easy-to-understand
        if(nums.size() < 2){
            return nums.size()-1;
        }
        int max1 = INT_MIN;
        int max2 = INT_MIN;
        int result = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > max1){
                result = i;
                max2 = max1;
                max1 = nums[i];
            }else if(nums[i] > max2){
                max2 = nums[i];
            }
        }
        return max1 >= 2*max2 ? result : -1;
    }
};