class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        for(int i = 0; i < t.length(); i++){
            mp[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]--;
        }
        for(auto t : mp){
            if(t.second) return t.first;
        }
        return NULL;
    }
};