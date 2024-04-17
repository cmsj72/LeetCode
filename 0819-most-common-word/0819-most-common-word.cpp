class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> mp;
        string tmp = "";
        for(int i = 0; i < paragraph.size(); i++){
            if(('a' <= paragraph[i] && paragraph[i] <= 'z') ||  ('A' <= paragraph[i] && paragraph[i] <= 'Z')){
                tmp += tolower(paragraph[i]);
            }else if(tmp != ""){                
                mp[tmp]++;
                tmp = "";
            }
        }
        if(tmp != ""){
            mp[tmp]++;
            tmp = "";
        }
        for(int i = 0; i < banned.size(); i++){
            if(mp.find(banned[i]) != mp.end()) mp[banned[i]] = -1;
        }
        int cnt = -1;
        for(auto p : mp){
            cout << p.first << p.second << endl;
            if(p.second > cnt){
                cnt = p.second;
                tmp = p.first;
            }
        }
        return tmp;
    }
};