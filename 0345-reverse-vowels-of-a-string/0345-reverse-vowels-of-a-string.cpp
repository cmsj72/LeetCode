class Solution {
public:
    string reverseVowels(string s) {
        vector<char> vec;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
                || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                vec.push_back(s[i]);
            }
        }
        int index = vec.size() - 1;
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'
                || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                ans += vec[index--];
            }else{
                ans += s[i];
            }
        }
        return ans;

        //  ===================================
        //  https://leetcode.com/problems/reverse-vowels-of-a-string/solutions/3723102/easy-solution-with-simple-explanation-using-two-pointer
        // string word = s;
        // int start = 0;
        // int end = s.length() - 1;
        // string vowels = "aeiouAEIOU";

        // while(start < end){
        //     while(start < end && vowels.find(word[start]) == string::npos){
        //         start++;
        //     }
        //     while(start < end && vowels.find(word[end]) == string::npos){
        //         end--;
        //     }
        //     swap(word[start], word[end]);
        //     start++;
        //     end--;
        // }
        // return word;
    }
};