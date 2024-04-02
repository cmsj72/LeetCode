public class Solution {
    public int PivotIndex(int[] nums) {
        //  https://leetcode.com/problems/find-pivot-index/solutions/2245137/straightforward-readable-c-solution-w-explanation
        //  1.  nums의 합을 구하고 이것이 sumRight
        //  2.  sumLeft를 0으로 초기화
        //  3.  배열을 순회
        //  4.  각 반복에서 sumRight에서 nums[i]를 뺀다
        //  5.  sumLeft와 sumRight를 비교하여 같으면 인덱스 i를 반환
        //  6.  같지 않다면 현재 원소 nums[i]를 sumLeft에 더하고 다음 반복 진행
        int sumRight = nums.Sum();
        int sumLeft = 0;

        for(int i = 0; i < nums.Length; i++){
            sumRight -= nums[i];

            if(sumLeft == sumRight){
                return i;
            }

            sumLeft += nums[i];
        }

        return -1;
    }
}