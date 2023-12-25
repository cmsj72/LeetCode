class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        //for(int i = 31; i > 0; i++)
        uint32_t ans = 0;
        bitset<32> num(n);
        for(int i = 1; i <= 32; i++){
            //uint32_t tmp = num[0] | 0;
            uint32_t tmp = 0 | num[0];
            tmp = tmp << (32 - i);
            num = num >> 1;
            ans = ans | tmp;
        }
        return ans;
    }
};