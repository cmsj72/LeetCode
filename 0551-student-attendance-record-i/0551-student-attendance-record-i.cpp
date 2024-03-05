class Solution {
public:
    bool checkRecord(string s) {
        int absentCnt = 0;
        int lateCnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L'){
                lateCnt++;
                if(lateCnt >= 3){
                    return false;
                }
            }else{
                if(s[i] == 'A'){
                    absentCnt++;
                    if(absentCnt >= 2){
                        return false;
                    }
                }
                lateCnt = 0;
            }
        }
        return true;

        //  ==============================  //
        //  https://leetcode.com/problems/student-attendance-record-i/solutions/3600656/very-simple-c
        //  거의 비슷함
        int a = 0, b = 0, c = 0;
        for(auto &i: s){
            if(i=='A')a++,b=0;
            else if(i=='L')b++;
            else b = 0;
            if(b>=3)c = 1;
        }
        if(c||a>1)return false;
        return true;
    }
};