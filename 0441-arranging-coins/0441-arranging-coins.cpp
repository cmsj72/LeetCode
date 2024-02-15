class Solution {
public:
    int arrangeCoins(int n) {
        long long sum = 0;
        for(int i = 1; ; i++){
            sum += i;
            if(sum > n){
                return i - 1;
            }else if(sum == n){
                return i;
            }
        }
        return 0;

        //  ==============================  //
        //  https://leetcode.com/problems/arranging-coins/solutions/537200/2-solutions-rant-pictures
        // int i(0);
        // for( ; n >= 0; n -= ++i);
        // return i - 1;
    }
};