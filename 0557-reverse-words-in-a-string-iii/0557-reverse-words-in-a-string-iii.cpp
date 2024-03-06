class Solution {
public:
    string reverseWords(string s) {
        int spaceCnt = 0;
        int left = 0, right;
        for(int i = 0; i < s.size(); i++){
            if(s[i + 1] == ' ' || i == s.size() - 1){
                right = i;
                while(left < right){
                    char tmp = s[left];
                    s[left] = s[right];
                    s[right] = tmp;
                    ++left,--right;
                }
                left = i + 2;
            }
        }
        return s;

        //  ==============================  //
        //  https://leetcode.com/problems/reverse-words-in-a-string-iii/solutions/4111458/91-55-easy-solution-reverse-join
        // stringstream ss(s);
        // string temp,ans;
        // while(ss>>temp){
        //     reverse(temp.begin(),temp.end());
        //     ans+= (temp+" ");
        // }
        
        // return ans.substr(0,ans.size()-1);
    }
};