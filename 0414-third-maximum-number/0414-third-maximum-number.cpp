class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(auto c : nums)
            cout<< c << endl;
        return nums.size() < 3 ? nums[0] : nums[2];
    }
};