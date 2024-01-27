public class Solution {
    public bool IsPerfectSquare(int num) {
        for(uint i = 1; i * i <= num; i++){
            if(i*i == num)
                return true;
        }
        return false;
    }
}