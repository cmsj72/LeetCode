class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int i = 0; i <= turnedOn; i++){
            int h = i;
            int m = turnedOn - i;
            if(h > 4 || m > 6) continue;
            for(int j = 0; j < 12; j++){
                bitset<4> bh(j);
                if(bh.count() != h) continue;
                for(int k = 0; k <= 59; k++){
                    bitset<6> bm(k);
                    if(bm.count() == m){
                        string tmp = to_string(j) + ":";
                        if(k < 10) 
                            tmp += "0";
                        ans.push_back(tmp + to_string(k));
                    }
                }
            }
        }
        return ans;

        //  =====================
        //  https://leetcode.com/problems/binary-watch/solutions/926686/easy-bit-count-solution-c
        //  https://mumomu.tistory.com/50
        // vector<string> result;
        
        // for(int hours = 0; hours < 12; hours++)
        // {
        //     for(int minute = 0; minute < 60; minute++)
        //     {
        //         string temp = "";
        //         if(__builtin_popcount(hours) + __builtin_popcount(minute) == num )
        //         {
        //             temp += to_string(hours) + ":";
                    
        //             if(minute < 10)
        //             {
        //                 temp += "0";
        //             }
        //             temp += to_string(minute);
        //             result.push_back(temp);
        //         }
        //     }
        // }
        // return result;

        //  더 짧은거
        //  https://leetcode.com/problems/binary-watch/solutions/4584860/easy-c-solution-intuition-approach-explained-bits-backtracking-easy-fast
        // vector<string> result;
        // for(int h=0;h<12;h++){
        //     for(int m=0;m<60;m++){
        //         if((__builtin_popcount(h)+__builtin_popcount(m))==turnedOn){
        //             result.push_back(to_string(h)+(m<10 ? ":0" : ":")+to_string(m));
        //         }
        //     }
        // }
        // return result;
    }
};