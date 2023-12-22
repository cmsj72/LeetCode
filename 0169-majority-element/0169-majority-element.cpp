class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size() / 2;
        sort(nums.begin(), nums.end());
        int cnt;
        int pt = pow(10,9) + 1;
        for(int i = 0; i < nums.size(); i++){
            if(pt != nums[i]){
                if(cnt > n) return pt;
                pt = nums[i];
                cnt = 1;
            }else{
                cnt++;
            }
        }
        return pt;
    }
};