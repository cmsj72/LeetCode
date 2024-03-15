class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size() == 1 && flowerbed[0] == 0){
            return 1;
        }
        int cnt = 0;
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                if((i == 0 && (i + 1 < flowerbed.size() && flowerbed[i+1] == 0))
                    || (i == flowerbed.size() - 1 && (i - 1 >= 0 && flowerbed[i - 1] == 0))
                    || ((i + 1 < flowerbed.size() && flowerbed[i+1] == 0) && (i - 1 >= 0 && flowerbed[i - 1] == 0))){
                        cnt++;
                        flowerbed[i] = 1;
                }
            }
        }
        cout << cnt << endl;
        return n <= cnt;

        //  Editorial
        //  1.  Single Scan
        //  중간에 생각했던 방법이긴 한데 제대로 구현 못했었음..
        // int count = 0;
        // for (int i = 0; i < flowerbed.size(); i++) {
        //     // Check if the current plot is empty.
        //     if (flowerbed[i] == 0) {
        //         // Check if the left and right plots are empty.
        //         bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
        //         bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                
        //         // If both plots are empty, we can plant a flower here.
        //         if (emptyLeftPlot && emptyRightPlot) {
        //             flowerbed[i] = 1;
        //             count++;
        //         }
        //     }
        // }
        // return count >= n;

        //  2.  Optimized
        // int count = 0;
        // for (int i = 0; i < flowerbed.size(); i++) {
        //     // Check if the current plot is empty.
        //     if (flowerbed[i] == 0) {
        //         // Check if the left and right plots are empty.
        //         bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
        //         bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                
        //         // If both plots are empty, we can plant a flower here.
        //         if (emptyLeftPlot && emptyRightPlot) {
        //             flowerbed[i] = 1;
        //             count++;
        //             if (count >= n) {
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return count >= n;
    }
};