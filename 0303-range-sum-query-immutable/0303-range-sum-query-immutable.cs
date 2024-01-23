public class NumArray {
int[] arr;
    public NumArray(int[] nums) {
        arr = new int[nums.Length];
        arr[0] = nums[0];
        for(int i = 1; i < nums.Length; i++){
            arr[i] = arr[i-1] + nums[i];
        }
    }
    
    public int SumRange(int left, int right) {
        return left == 0 ? arr[right] : arr[right] - arr[left - 1];
    }
}

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.SumRange(left,right);
 */