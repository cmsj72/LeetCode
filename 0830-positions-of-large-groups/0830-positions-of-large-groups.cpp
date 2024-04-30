class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> vec;
        int pt = 0;
        char c = s[pt];
        for(int i = 1; i < s.size(); i++){
            if(s[i] != c){
                if(i - pt >= 3){
                    vector<int> tmp;
                    tmp.push_back(pt);
                    tmp.push_back(i - 1);
                    vec.push_back(tmp);
                }
                pt = i;
                c = s[pt];
            }
        }
        if(s.size() - pt >= 3){
            vector<int> tmp;
            tmp.push_back(pt);
            tmp.push_back(s.size() - 1);
            vec.push_back(tmp);
        }
        return vec;

        //  ==============================  //
        //  https://leetcode.com/problems/positions-of-large-groups/solutions/682460/c-solution-one-pass
        // vector<vector<int>> vRes;
        // int start = 0, end = 0;
        // for(int i = 1; i < s.size(); i++){
        //     if(s[i] == s[i-1]){
        //         end++;
        //     }
        //     if(s[i] != s[i-1] || i == s.size() - 1){
        //         if(end - start >= 2){
        //             vRes.push_back({start,end});
        //         }
        //         start = end = i;
        //     }
        // }
        // return vRes;
    }
};