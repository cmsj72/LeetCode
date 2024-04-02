class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> s1(nums.size());
        vector<int> s2(nums.size());
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < nums.size(); i++){
            sum1 += nums[i];
            sum2 += nums[nums.size() - 1 - i];
            s1[i] = sum1;
            s2[nums.size() - 1 - i] = sum2;
        }
        for(int i = 0; i < nums.size(); i++){
            if(s1[i] == s2[i]) return i;
        }
        return -1;
    }
};