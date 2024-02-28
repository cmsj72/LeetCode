class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
        vector<string> ans;
        for(int i = 0; i < words.size(); i++){
            int cnt = 0;
            for(int k = 0; k < 3; k++){
                for(int j = 0; j < words[i].size(); j++){
                    if(row[k].find(tolower(words[i][j]))  == string::npos){
                        cnt++;
                        break;
                    }
                }
            }
            if(cnt < 3){
                ans.push_back(words[i]);
            }
        }
        return ans;

        //  ==============================  //
        //  https://leetcode.com/problems/keyboard-row/solutions/373966/c-easy-solution-faster-than-100-with-explaination
        // unordered_set<char> set1{'q','w','e','r','t','y','u','i','o','p'};
        // unordered_set<char> set2{'a','s','d','f','g','h','j','k','l'};
        // unordered_set<char> set3{'z','x','c','v','b','n','m'};
        // for(string word : words){
        //     bool flag = true;
        //     unordered_set<char> setTemp;

        //     if(set1.find(tolower(word[0])) != set1.end()){
        //         setTemp = set1;
        //     }else if(set2.find(tolower(word[0])) != set2.end()){
        //         setTemp = set2;
        //     }else{
        //         setTemp = set3;
        //     }

        //     for(char ch : word){
        //         if(setTemp.find(tolower(ch)) == setTemp.end()){
        //             flag = false;
        //             break;
        //         }
        //     }
        //     if(flag)
        //         res.push_back(word);
        // }
        // return res;
    }
};