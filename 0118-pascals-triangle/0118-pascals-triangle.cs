public class Solution {
    public IList<IList<int>> Generate(int numRows) {
        List<IList<int>> ans = new List<IList<int>>();
        for(int i = 1; i <= numRows; i++){
            int[] arr = new int[i];
            Array.Fill(arr,1);
            for(int j = 0; j < arr.Length; j++){
                if(j != 0 && j != arr.Length - 1){
                    arr[j] = ans[i-2][j-1] + ans[i-2][j];
                }
            }
            List<int> tmp = new List<int>(arr);
            ans.Add(tmp);
        }
        return ans;
    }
}