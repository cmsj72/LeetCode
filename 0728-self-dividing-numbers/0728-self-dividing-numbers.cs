public class Solution {
    public IList<int> SelfDividingNumbers(int left, int right) {
        List<int> list = new();
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
                list.Add(i);
            }
        }
        return list;
    }
}