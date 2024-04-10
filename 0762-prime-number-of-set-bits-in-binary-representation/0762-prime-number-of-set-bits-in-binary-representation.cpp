class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<bool> v(right + 1,true);
        v[1] = false;
        for(int i = 2; i * i <= right; i++){
            if(v[i]){
                for(int j = i * i; j <= right; j += i){
                    v[j] = false;
                }
            }
        }
        int ans = 0;
        for(int i = left; i <= right; i++){
            int cnt = 0, num = i;
            while(num > 0){
                if(num & 1){
                    cnt++;
                }
                num = num >> 1;
            }
            if(v[cnt]){
                cout << cnt << endl;
                ans++;
            }
        }
        return ans;        
    }
    //  ==========
    //  https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/solutions/751555/c-implementation-for-every-function
    // int countPrimeSetBits(int L, int R){
    //     int res = 0;
    //     int count;
    //     for(int L; i <= R; i++){
    //         cout = count_of_bits(i);
    //         if(if_prime(count)){
    //             res += 1;
    //         }
    //     }
    //     return res;
    // }

    // bool if_prime(int num){
    //     if(num <= 1) return false;
    //     int i = 2;
    //     while(i <= (num/2)){
    //         if(num % i == 0) return false;
    //         i++;
    //     }
    //     return true;
    // }

    // int count_of_bits(int num){
    //     int count = 0;
    //     while(num > 0){
    //         if(num % 2 == 1){
    //             count += 1;
    //             num /= 2;
    //         }else{
    //             num /= 2;
    //         }
    //     }
    //     return count;
    // }
};