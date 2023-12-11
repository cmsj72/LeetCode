public class Solution {
    public IList<int> GetRow(int rowIndex) {
        //https://leetcode.com/problems/pascals-triangle-ii/solutions/4173164/100-easy-optimized/
        //  C++ 이랑 다른 방법을 사용한 풀이
        
        List<int> res = new List<int> {1};
        //  맨 처음과 맨 끝은 1이기 때문에 1부터 시작
        long prev = 1;
        //  rowIndex 1일 때는 항이 2개, prev에 1이 이미 들어있기 때문에
        //  2 - 1 로 1개만 계산하면 된다
        //  rowIndex 2일 때는 항이 3개, prev에 1이 이미 들어있기 때문에
        //  3- 1 로 2개만 계산하면 된다
        //  따라서 rowIndex만큼 반복하여 계산
        for(int k = 1; k <= rowIndex; k++){
            long next_val = prev * (rowIndex - k + 1) / k;
            res.Add((int)next_val);
            prev = next_val;
        }
        return res;
    }
}