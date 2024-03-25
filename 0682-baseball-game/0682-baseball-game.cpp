class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> score;
        int pt = -1;
        long sum = 0;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "D"){
                score.push_back(score[pt++] * 2);
            }else if(operations[i] == "C"){
                score.pop_back();
                pt--;
            }else if(operations[i] == "+"){
                score.push_back(score[pt] + score[pt-1]);
                pt++;
            }else{
                score.push_back(stoi(operations[i]));
                pt++;
            }
        }
        for(int n : score) sum += n;
        return sum;
    }
};