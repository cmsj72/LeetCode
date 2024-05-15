class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string> ans;
        string s;
        stringstream ss1(s1), ss2(s2);
        while(ss1 >> s){
            mp[s]++;
        }
        while(ss2 >> s){
            mp[s]++;
        }
        for(auto p : mp){
            if(p.second == 1){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};