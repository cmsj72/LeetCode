class Solution {
public:
    bool checkWord(unordered_map<char,int> mp, string& word){
        for(int i = 0; i < word.size(); i++){
            if(mp.find(word[i]) != mp.end()){
                mp[word[i]]--;
            }
        }
        for(auto p : mp){
            if(p.second > 0) return false;
        }
        return true;
    }
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char,int> mp;
        for(int i = 0; i < licensePlate.size(); i++){
            if('A' <= licensePlate[i] && licensePlate[i] <= 'Z'){
                mp[licensePlate[i] + 'a' - 'A']++;
            }else if('a' <= licensePlate[i] && licensePlate[i] <= 'z'){
                mp[licensePlate[i]]++;
            }            
        }
        string ans = "";
        for(int i = 0; i < words.size(); i++){
            if(checkWord(mp, words[i])){
                if(ans == "" || words[i].size() < ans.size()){
                    ans = words[i];
                }
            }
        }
        return ans;

        //  ==============================
        //  submission 제일 빠른 시간 코드
        // vector<int> harsh(26, 0);
        // for (auto ch : licensePlate) {
        //     if (isalpha(ch)) {
        //         ++harsh[tolower(ch) - 'a'];
        //     }
        // }
        
        // string res="";
        // for (auto& str : words) {
        //     vector<int> aksh(26, 0);
        //     for (auto ch : str) {
        //         ++aksh[ch - 'a'];
        //     }
            
        //     bool complete = true;
        //     for (int i = 0; i < 26; ++i) {
        //         if (aksh[i] < harsh[i]) {
        //             complete = false;
        //             break;
        //         }
        //     }
        //     if (complete && (res.size()==0 || res.size()>str.size())) {
        //         res = str;
        //     }
        // }
        
        // return res;
    }
};