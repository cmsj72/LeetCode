class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        //  내가 푼 방법
        //  이전 문제처럼 vector를 이용해 정렬(오름차순) 후 같은 숫자 일때 인덱스의 차이가 k보다 작은걸 찾음
        if(nums.size() < 2) return false;
        vector<pair<int,int>> vec;
        for(int i = 0; i < nums.size(); i++){
            vec.push_back({nums[i], i});
        }
        sort(vec.begin(), vec.end());
        for(int i = 0; i < vec.size() - 1; i++){
            if(vec[i].first == vec[i+1].first && abs(vec[i].second - vec[i+1].second) <= k){
                return true;
            }
        }
        return false;

        //  https://leetcode.com/problems/contains-duplicate-ii/solutions/2727290/c-easy-detailed-explaination-optimized/
//         unordered_map<int,int> mp;
//         for(int i = 0; i < n; i++){
//             //  mp에 nums[i]를 키값으로 가지는 원소의 개수가 0보다 크면
//             if(mp.count(nums[i])){
//                 //  현재 인덱스와 mp[nums[i]]에 저장된 인덱스와의 차의 절대값을 비교하여 k보다 작으면
//                 if(abs(i - mp[nums[i]]) <= k)
//                     //  true 반환
//                     return true;
//             }
//             //  없는 경우 mp에 nums[i]의 가장 최근 인덱스를 저장
//             mp[nums[i]] = i;
//         }

//         return false;
    }
};