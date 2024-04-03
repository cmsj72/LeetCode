class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i = left; i <= right; i++){
            int num = i;
            bool flag = true;
            while(num > 0){
                if(num % 10 == 0 || i % (num % 10) != 0){
                    flag = false;
                    break;
                }
                num /= 10;
            }
            if(flag){
                vec.push_back(i);
            }
        }
        return vec;
    }
};