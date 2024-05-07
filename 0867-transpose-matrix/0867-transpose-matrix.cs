public class Solution {
    public int[][] Transpose(int[][] matrix) {
        int rows = matrix[0].Length;
        int columns = matrix.Length;

        int[][] newMatrix = new int[rows][];

        for(int i = 0; i < rows; i++){
            newMatrix[i] = new int[columns];
            for(int j = 0; j < columns; j++){
                newMatrix[i][j] = matrix[j][i];
            }
        }

        return newMatrix;
    }
}