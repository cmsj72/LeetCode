class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string, int> mp;
        multimap<int, string> mp2;
        vector<string> ans;
        for(int i = 0; i < list1.size(); i++){
            mp.insert({list1[i], i});
        }

        for(int i = 0; i < list2.size(); i++){
            if(mp.contains(list2[i])){
                mp2.insert({mp[list2[i]] + i, list2[i]});
            }
        }
        int minIndex = -1;
        for(auto p : mp2){
            if(minIndex == -1){
                minIndex = p.first;
                ans.push_back(p.second);
            }else if(minIndex == p.first){
                ans.push_back(p.second);
            }else{
                break;
            }
        }
        return ans;

        //  ==============================  //
        //  Editorial도 참고

        //  https://leetcode.com/problems/minimum-index-sum-of-two-lists/solutions/103674/c-9-lines-hash-table-easy-to-understand
        // vector<string>res;
        // unordered_map<string,int>m;
        // int min = INT_MAX;
        // for(int i = 0; i < list1.size(); i++) m[list1[i]] = i;
        // for(int i = 0; i < list2.size(); i++)
        //     if(m.count(list2[i]) != 0)
        //         if(m[list2[i]] + i < min) min = m[list2[i]] + i, res.clear(), res.push_back(list2[i]);
        //         else if(m[list2[i]] + i == min) res.push_back(list2[i]);
        // return res;
    }
};