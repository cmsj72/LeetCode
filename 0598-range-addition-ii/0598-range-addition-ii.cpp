class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minM = m, minN = n;
        for(int i = 0; i < ops.size(); i++){
            if(ops[i][0] < minM){
                minM = ops[i][0];
                
            }
            if(ops[i][1] < minN){
                minN = ops[i][1];
            }
        }
        //  이게 4ms 더 빠르게 나오네;
        // for(auto o : ops){
        //     minM = min(minM, o[0]);
        //     minN = min(minN, o[1]);
        // }
        return minM * minN;
    }
};