public class Solution {
    public bool IsUgly(int n) {
        //  https://leetcode.com/problems/ugly-number/solutions/2825995/c-simple-solution
        //  내가 푼 코드에서 n==1 조건을 없애도 된다
        //  n<1에서 false, while(n>1)에서 false 따라서 바로 return true로 이동한다
        if(n == 1){
            return true;
        }else if(n < 1){
            return false;
        }

        while(n > 1){
            if(n % 2 == 0){
                n/=2;
            }else if(n % 3 == 0){
                n/=3;
            }else if(n % 5 == 0){
                n/=5;
            }else{
                return false;
            }
        }
        return true;
    }
}