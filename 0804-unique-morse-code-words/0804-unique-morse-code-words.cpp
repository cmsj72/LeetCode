class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string mCode[26] = {".-","-...","-.-.","-..","."
            ,"..-.","--.","....","..",".---","-.-",".-..","--"
            ,"-.","---",".--.","--.-",".-.","...","-","..-","...-"
            ,".--","-..-","-.--","--.."};
        unordered_set<string> st;
        for(string s : words){
            string tmp = "";
            for(int i = 0; i < s.size(); i++){
                tmp += mCode[s[i] - 'a'];
            }
            st.insert(tmp);
        }
        return st.size();
    }
};