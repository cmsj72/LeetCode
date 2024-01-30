class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, pair<bool,int>> mp;
        for(int i = 0; i < s.length(); i++){
            if(mp.find(s[i]) == mp.end()){
                mp.insert({s[i],{false, i}});
            }else{
                mp[s[i]] = {true, i};
            }
        }
        int ans = s.length();
        bool flag = false;
        for(auto iter : mp){
            if(iter.second.first == false && iter.second.second < ans){
                flag = true;
                ans = iter.second.second;
            }
        }
        return flag ? ans : -1;
    }
};