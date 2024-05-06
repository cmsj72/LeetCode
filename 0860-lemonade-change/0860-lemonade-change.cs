public class Solution {
    public bool LemonadeChange(int[] bills) {
        int five = 0, ten = 0;
        foreach(int n in bills){
            if(n == 5) 
                five++;
            else if(n == 10){
                five--;
                ten++;
            }
            else if(ten > 0){
                five--;
                ten--;
            }
            else 
                five -= 3;
            if(five < 0) 
                return false;
        }
        return true;
    }
}