class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //  HashTable 이용 방법
        // unordered_map<int,int> mp;
        // for(int i = 0; i < nums.size(); i++){
        //     if(mp[nums[i]] == 0){
        //         mp[nums[i]]++;
        //     }else{
        //         return true;
        //     }
        // }
        // return false;

        //  정렬 후 원소를 비교하여 같은 것이 있다면 최소 2개 있다는 뜻
        //  true를 반환
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};