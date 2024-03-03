class Solution {
public:
    bool detectCapitalUse(string word) {
        bool isFirstCap = false;
        int capCnt = 0;
        for(int i = 0; i < word.size(); i++){
            if('A' <= word[i] && word[i] <= 'Z'){
                if(i == 0) isFirstCap = true;
                capCnt++;
            }
        }
        
        if(isFirstCap){
            //  첫 글자 대문자일 때
            if(capCnt == word.size()){
                //  대문자 갯수가 문자열의 길이와 같다면
                return true;
            }else if(capCnt == 1){
                //  첫 글자만 대문자일 때
                return true;
            }else{
                return false;
            }
        }else{
            //  첫 글자 소문자일 때
            if(capCnt > 0){
                return false;
            }
        }
        return true;

        //  ==============================  //
        //  https://leetcode.com/problems/detect-capital/solutions/2982608/easiest-c-solution-o-n-0ms
        int count = 0;
        if(word.size() == 1){
            return true;
        }

        for(int i = 0; i < word.size(); i++){
            if(isupper(word[i])){
                count++;
            }
        }

        if(count == 1 && isupper(word[0])){
            return true;
        }
        if(count == 0 || count == word.size()){
            return true;
        }else{
            return false;
        }
    }
};