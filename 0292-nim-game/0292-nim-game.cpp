class Solution {
public:
    bool canWinNim(int n) {
        //  n이 4의 배수인 경우 내가 몇 개의 돌을 제거해도 무조건 친구가 이긴다
        return !(n % 4 == 0);
    }
};