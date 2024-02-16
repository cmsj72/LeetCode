class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int len = nums.size();
        int cnt = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(cnt == nums[i]){
                cnt++;
            }else if(cnt < nums[i]){
                cout << "asd : " << nums[i] << endl;
                while(cnt < nums[i]){
                    ans.push_back(cnt);
                    cnt++;
                    if(cnt == nums[i]) cnt++;
                }
            }
        }
        while(cnt <= len){
            ans.push_back(cnt++);
        }
        return ans;
    }
};