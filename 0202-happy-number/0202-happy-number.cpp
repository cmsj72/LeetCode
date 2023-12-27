class Solution {
public:
    bool isHappy(int n) {
        while(true){
            int sum = 0;
            while(n > 0){
                int a = n % 10;
                //cout << a << endl;
                n /= 10;
                sum += pow(a,2);
            }
            if(sum == 1){
                return true;
            }
            //  행복하지 않은 수인걸 확인할 방법을 몰랐음
            //  2는 해보면 4를 기점으로 계속 반복됨
            //  4는 그냥 반복됨
            else if(sum == 2 || sum == 4){
                return false;
            }
            n = sum;
        }
    }
};