class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cash5 = 0, cash10 = 0, cash20 = 0;
        for(int n : bills){
            if(n-5 == 5){
                if(cash5 < 1){
                    return false;
                }else{
                    cash5--;
                    cash10++;
                }
            }else if(n-5 == 15){
                if(cash5 >= 1 && cash10 >= 1){
                    cash5--;
                    cash10--;
                    cash20++;
                }else if(cash5 >= 3){
                    cash5 -= 3;
                    cash20++;
                }
                else{
                    return false;
                }
            }else{
                cash5++;
            }
        }
        return true;
        //  ==============================  //
        //  https://leetcode.com/problems/lemonade-change/solutions/143719/c-java-python-straight-forward

        // int five = 0, ten = 0;
        // for (int i : bills) {
        //     if (i == 5) five++;
        //     else if (i == 10) five--, ten++;
        //     else if (ten > 0) ten--, five--;
        //     else five -= 3;
        //     if (five < 0) return false;
        // }
        // return true;
    }
};