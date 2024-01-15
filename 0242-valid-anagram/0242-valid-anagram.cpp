class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            if(mp[t[i]]) mp[t[i]]--;
            else return false;
        }
        for(pair<char, int> elem : mp){
            if(elem.second > 0) return false;
            //cout << elem.second << endl;
        }
        return true;
    }    
};