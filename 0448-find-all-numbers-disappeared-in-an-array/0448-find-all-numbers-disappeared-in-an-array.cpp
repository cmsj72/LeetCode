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
        //  ==============================  //
        //  https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/solutions/1583736/c-python-all-6-solutions-w-explanations-binary-search-hashset-2x-o-1-space-approach
        //  1.Brute-Force
        // vector<int> ans;
        // for(int i = 1; i <=size(nums); i++){
        //     if(find(begin(nums), end(nums), i) == end(nums)){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        //  2.Sort & Binary-Search
        //  내장 함수? 가 있네
        // sort(begin(nums), end(nums));
        // vector<int> ans;
        // for(int i = 1; i <= size(nums); i++){
        //     if(!binary_search(begin(nums), end(nums), i)){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;

        //  3.HashSet
        // unordered_set<int> s(begin(nums), end(nums));
        // vector<int> ans(size(nums) - size(s));
        // for(int i = 1, j = 0; i <= size(nums); i++){
        //     if(!s.count(i))
        //         ans[j++] = i;
        // }
        // return ans;

        //  4.Boolean array
        // vector<bool> seen(size(nums)+1);
        // vector<int> ans;
        // for(auto c : nums)
        //     seen[c] = true;
        // for(int i = 1; i <= size(nums); i++){
        //     if(!seen[c]) ans.push_back(i);
        // }
        // return ans;

        //  5. 이거는 길어서 링크 참조
    }
};