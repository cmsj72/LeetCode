class Solution {
public:
    int findComplement(int num) {
        //  내가 푼 풀이
        int ans = 0;
        string str = "";
        while(num > 0){
            string s = num % 2 == 0 ? "1" : "0";
            num /= 2;
            str = s + str;
        }
        cout << str << endl;
        for(int i = 0; i < str.size(); i++){
            ans = ans ^ (str[i] - '0');
            if(i < str.size() - 1){
                ans = ans << 1;
            }
        }
        return ans;
        //  ==============================  //
        //  https://leetcode.com/problems/number-complement/solutions/96017/3-line-1-line-c
        
        //  1.
        // unsigned mask = ~0;
        // while(num & mask) mask <<= 1;
        // return ~mask & ~num;
        // // num          = 00000101
        // // mask         = 11111000
        // // ~mask & ~num = 00000010

        //  2.
        // return (unsigned)~0 >> __builtin_clz(n) ^ n;
        // // n                                    = 00000101
        // // (unsigned)~0 >> __builtin_clz(n)     = 00000111
        // // (unsigned)~0 >> __builtin_clz(n) ^ n = 00000010     
    }
};