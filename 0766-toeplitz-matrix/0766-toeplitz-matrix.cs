public class Solution {
    public bool IsToeplitzMatrix(int[][] matrix) {
        //  submission 제일 빠른 코드
        //  처음에 생각했던 접근 방법인데 힌트보고 풀어버려서 하다 말았음
        int m = matrix.Length;
        int n = matrix[0].Length;

        for(int start = 0; start < m; start++){
            for(int i = start + 1, j = 1; i < m && j < n; i++,j++){
                if(matrix[i-1][j-1] != matrix[i][j])
                    return false;
            }
        }

        for(int start = 1; start < n; start++){
            for(int i = 1, j = start+1; i < m && j < n; i++,j++){
                if(matrix[i-1][j-1] != matrix[i][j])
                    return false;
            }
        }
        return true;
    }
}