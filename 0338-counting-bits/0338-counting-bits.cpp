class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            bitset<32> tmp(i);
            ans.push_back(tmp.count());
        }
        return ans;

        //  =============================
        //  https://leetcode.com/problems/counting-bits/solutions/1808016/c-vectors-only-easy-to-understand-full-explanation

        //  O(nlogn)
        // vector<int> ans;
        // for(int i = 0; i <= n; i++){
        //     int sum = 0;
        //     int num = i;
        //     //  2진수이기 때문에 2로 나누면서 1이 남은경우 더해서 1의 개수를 파악
        //     while(num != 0){
        //         sum += num%2;
        //         num /= 2;
        //     }
        //     ans.push_back(sum);
        // }
        // return ans;

        //  O(n)
        // vector<int> t(n+1);
        // t[0] = 0;
        // for(int i = 1; i <= n; i++){
        //     //  2진수 이기 때문에 i는 i/2의 계산 값에 i%2( 0 또는 1) 을 더한다
        //     t[i] = t[i/2] + i%2;
        // }
            
        // return t;
    }
};