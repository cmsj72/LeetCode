class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        for(auto c : magazine){
            if(mp.find(c) != mp.end()){
                mp[c]++;
            }else{
                mp.insert({c,1});
            }
        }
        for(auto c : ransomNote){
            if(mp.find(c) != mp.end()){
                if(mp[c] > 0){
                    mp[c]--;
                }else{
                    return false;
                }
            }else{
                return false;
            }
        }

        return true;
    }
};