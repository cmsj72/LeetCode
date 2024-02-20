class Solution {
public:
    int hammingDistance(int x, int y) {
        int num = x ^ y;
        int ans = bitset<32>(num).count();
        return ans;
    }
};