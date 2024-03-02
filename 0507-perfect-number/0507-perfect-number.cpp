class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans = 0;
        for(int i = 1; i < num; i++){
            if(num % i == 0){
                ans += i;
            }
        }
        return ans == num;

        //  ==============================  //
        //  Editorial
        //  1.  Brute Force[Time Limit Exceeded]
        //  num <= 0 조건문 제외 하고 같음
        // if (num <= 0) {
        //     return false;
        // }
        // int sum = 0;
        // for (int i = 1; i < num; i++) {
        //     if (num % i == 0) {
        //         sum += i;
        //     }

        // }
        // return sum == num;

        //  2.  Better Brute Force [Time Limit Exceeded]
        //  sum이 num보다 크게되면 바로 false를 반환하는 방식
        //  결국 최악의 경우 끝까지 돈다
        // if (num <= 0) {
        //     return false;
        // }
        // int sum = 0;
        // for (int i = 1; i < num; i++) {
        //     if (num % i == 0) {
        //         sum += i;
        //     }
        //     if(sum>num) {
        //         return false;
        //     }
        // }
        // return sum == num;

        //  3.  Optimal Solution [Accepted]
        // if (num <= 0) {
        //     return false;
        // }
        // int sum = 0;
        // for (int i = 1; i * i <= num; i++) {
        //     if (num % i == 0) {
        //         sum += i;
        //         if (i * i != num) {
        //             sum += num / i;
        //         }

        //     }
        // }
        // return sum - num == num;

        //  4.  Euclid-Euler Theorem [Accepted]
        //  설명은 본문에서 보기
    }

    
        

};
