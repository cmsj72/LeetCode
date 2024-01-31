class Solution {
public:
    bool isSubsequence(string s, string t) {
        int pt = 0;
        for(int i = 0; i < s.length(); i++){
            while(true){
                if(t.length() <= pt) return false;
                if(s[i] == t[pt]){
                    pt++;
                    break;
                }
                pt++;
            }
        }
        return true;
        //  ========================
        //  https://leetcode.com/problems/is-subsequence/solutions/4075908/daily-leetcode-challenge-september-day-22-c-c-python3-kotlin
        //  원리 자체는 비슷하지만 이게 더 간단하게 작성한 코드
        int length = s.size();
        int c = 0;
        if(length == 0){
            return true;
        }
        for(int i = 0; i < t.size(); i++){
            if(s[c] == t[i]){
                c++;
            }
        }

        if(c == length){
            return true;
        }
            
        return false;
    }
};