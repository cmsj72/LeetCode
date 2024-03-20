class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0;
        int v = 0;        
        for(int i = 0; i < moves.size(); i++){
            if(moves[i] == 'U'){
                v++;
            }else if(moves[i] == 'D'){
                v--;
            }else if(moves[i] == 'R'){
                h++;
            }else{
                h--;
            }
        }
        // if(h != 0 || v != 0){
        //     return false;
        // }
        // return true;
        return (h == 0 && v == 0);
    }
};