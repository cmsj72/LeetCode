class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> vec;
        set<int> st;
        for(int i = 1; i <= nums.size(); i++){
            st.insert(i);
        }
        for(int i = 0; i < nums.size(); i++){
            auto p = st.find(nums[i]);
            if(p != st.end()){
                st.erase(p);
            }else{
                vec.push_back(nums[i]);
            }
        }
        auto p = st.begin();
        vec.push_back(*p);
        return vec;

        //  ==============================  //
        //  https://leetcode.com/problems/set-mismatch/solutions/4606092/beats-99-08-c-java-python-javascript-5-approaches-explained
        //  1.  Brute Force Tc : n^2, Sc : 1
        // int dup = -1, missing = -1;
        // for(int i = 1; i <= nums.size(); i++){
        //     int count = 0;
        //     for(int j = 0; j < nums.size(); j++){
        //         if(nums[j] == i){
        //             count++;
        //         }
        //     }
        //     if(count == 2){
        //         dup = i;
        //     }else if(count == 0){
        //         missing = i;
        //     }
        // }
        // return {dup, missing};

        //  2.  Vector  Tc : n, Sc : n
        // int n = nums.size();
        // vector<int> v(n+1,0);
        // int missing = 0, dupblicate = 0;
        // for(int i = 0; i < n; i++){
        //     v[nums[i]]++;
        // }
        // for(int i = 1; i < v.size(); i++){
        //     if(v[i] == 2) dupblicate = i;
        //     if(v[i] == 0) missing = i;
        // }
        // return {duplicate, missing};

        //  3.  Set + Sum   Tc : n, Sc : n
        // int n = nums.size();
        // int actual_sum = n * (n + 1) / 2;
        // int array_sum = 0;
        // int unique_sum = 0;
        // unordered_set<int> s(nums.begin(), nums.end());

        // for(int a : nums)
        //     array_sum += a;

        // for(int a : s)
        //     unique_sum += a;

        // int missing = actual_sum - unique_sum;
        // int duplicate = array_sum - unique_sum;
        // return {duplicate, missing};

        //  4.  Maps    Tc : n, Sc : n
        // int n = nums.size();
        // unordered_map<int,int> mp;
        // for(int i = 1; i <= n; i++) mp[i]++;

        // for(auto a : nums) mp[a]--;
        // int duplicate = 0, missing = 0;

        // for(auto a : mp){
        //     if(a.second == -1) duplicate = a.first;
        //     if(a.second == 1) missing = a.first;
        // }

        // return {duplicate, missing};

        //  5.  XOR Operation   Tc : n, Sc : 1
        //  원본 링크 참조

    }

    
    
};