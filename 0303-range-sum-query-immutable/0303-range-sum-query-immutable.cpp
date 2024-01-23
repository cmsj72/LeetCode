class NumArray {
public:
vector<int> vec;
    NumArray(vector<int>& nums) {
        vec = nums;
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        for(int i = left; i <= right; i++){
            sum += vec[i];
        }
        return sum;
    }

    //  ============================================
    //  https://leetcode.com/problems/range-sum-query-immutable/solutions/3684449/c-using-prefix-sum-t-c-o-n-o-1-s-c-o-n
    //  https://san-tiger.tistory.com/entry/Prefix-sum-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98%EC%9D%B4%EB%9E%80
    // NumArray(vector<int>& nums) {
    //     //  입력으로 들어온 nums의 크기만큼 vec 크기 조절
    //     vec.resize(nums.size());

    //     //  처음 원소는 그대로 대입
    //     vec[0] = nums[0];

    //     //  vec[i]는 num[0]부터 nums[i-1]까지의 합인 vec[i-1]에 nums[i] 를 더해
    //     //  nums[i]까지의 합을 가진다.
    //     for(int i = 1; i < nums.size(); i++){
    //         vec[i] = vec[i-1] + nums[i];
    //     }
    // }
    
    // int sumRange(int left, int right) {
    //     if(left == 0){
    //         return vec[right];
    //     }
    //     //  nums[i]부터 nums[j]까지의 합은
    //     //  nums[0]부터 nums[j]까지의 합인 vec[j]에서
    //     //  nums[0]부터 nums[i-1]까지의 합인 vec[i - 1]를 뺀 값이다.
    //     return vec[right] - vec[left - 1];
    // }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */