public class Solution {
    public bool JudgeCircle(string moves) {
        int h = 0, v = 0;
        foreach(char c in moves){
            if(c == 'U') v++;
            else if(c == 'D') v--;
            else if(c == 'R') h++;
            else h--;
        }
        return (h == 0 && v == 0);
    }
}