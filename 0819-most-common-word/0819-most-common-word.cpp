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

        //  ==============================  //
        //  submission 제일 빠른코드
        // unordered_set<string> ban(banned.begin(), banned.end());
        // unordered_map<string, int> count;
        // for(auto &c: p) c = isalpha(c) ? tolower(c) : ' ';
        // istringstream iss(p);
        // string w;
        // pair<string, int> res("", 0);
        // //  w의 자료형에 맞는 정보가 없을 때까지
        // //  계속 스트림에서 w로 자료를 추출/복사. 끝에 도달하면 끝난다.
        // //  https://doitnow-man.tistory.com/entry/C-%EA%B0%9C%EB%B0%9C%EC%9E%90%EB%90%98%EA%B8%B0-6-istringstream-ostringstream-stringstream-%EC%82%AC%EC%9A%A9%EB%B2%95
        // while(iss >> w){
        //     if(band.find(w) == ban.end() && ++count[w] > res.second)
        //         res = make_pair(w, count[w]);
        // }
        // return res.first;
    }
};