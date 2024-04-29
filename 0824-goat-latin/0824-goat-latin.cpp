class Solution {
public:
    bool isVowel(char c){
        return (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u')
            || (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');
    }
    string toGoatLatin(string sentence) {
        vector<string> vec;
        istringstream iss(sentence);
        string w, ans, tail = "maa";
        while(iss >> w){
            vec.push_back(w);
        }
        for(int i = 0; i < vec.size(); i++){
            string tmp;
            if(isVowel(vec[i][0])){
                tmp += vec[i];
            }else{
                tmp = vec[i].substr(1) + vec[i][0];
            }
            ans += tmp + tail;
            if(i != vec.size() - 1) ans += ' ';
            tail += 'a';
        }
        return ans;
    }
};