public class Solution {
    public int[][] FlipAndInvertImage(int[][] image) {
        foreach(int[] arr in image){
            Array.Reverse(arr);
            for(int j = 0; j < arr.Length; j++){
                arr[j] ^= 1;
            }
        }
        return image;
    }
}