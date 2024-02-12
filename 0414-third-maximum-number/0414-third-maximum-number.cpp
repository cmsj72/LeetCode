class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        for(auto c : nums)
            cout<< c << endl;
        return nums.size() < 3 ? nums[0] : nums[2];

        //  ==============================  //
        //  Editorial
        //  자세한 설명은 홈페이지에서

        //  1.Sorting
        //  1)  nums 배열을 내림차순으로 정렬
        //  2)  중복을 허용하지 않는 수를 세는 elemCounted 변수를 1로 초기화,
        //      이전 숫자를 확인하기 위한 prevElem 변수를 배열의 첫 번째 원소로 초기화
        //  3)  nums 배열의 두 번째 원소부터 마지막 원소까지 반복
        //      만약 현재 숫자가 prevElem과 다르다면 elemCounted를 1 증가 시키고 현재 숫자를 prevElem으로 변경
        //      elemCounted가 3에 도달하면 3번째 큰 수를 찾았음을 의미
        //  4)  배열 끝까지 순회하면서 3번째 큰 수가 없으면 배열의 첫 번째 원소를 반환
        // sort(nums.begin(), nums.end(), greater<int>());

        // int elemCounted = 1;
        // int prevElem = nums[0];

        // for(int index = 1; index < nums.size(); ++index){
        //     if(nums[index] != prevElem){
        //         elemCounted += 1;
        //         prevElem = nums[index];
        //     }
        //     if(elemCounted == 3){
        //         return nums[index];
        //     }
        // }
        // return nums[0];

        //  2.Min Heap Data Structure
        //  1)  제일 작은 수를 top에 유지하기 위한 최소힙 minHeap 선언
        //      최소 힙에 삽입된 수를 추적하기 위한 해시셋 taken 선언
        //  2)  nums 배열의 모든 숫자를 반복
        //      -   만약 현재 숫자가 이미 최소힙에 있다면 스킵
        //      -   만약 최소힙에 3개의 숫자가 있고, 현재 숫자가 최소힙의 가장 작은 수보다 크면
        //          최소힙과 해시셋에서 가장 작은 수를 제거, 최소힙과 해시셋에 현재 수를 삽입
        //      -   그렇지않고 최소힙에 원소가 3개보다 적다면, 최소힙과 해시셋에 숫자를 삽입
        //  3)  만약 최소힙의 숫자가 3개보다 적다면 최소힙에서 가장 큰 숫자를 반환
        //      이는 nums 배열의 가장 큰 수이다.
        //  4)  그렇지않으면, 최소힙의 top에 있는 원소를 반환 
        //      이는 3번째 큰 수 이다.
        // priority_queue<int, vector<int>, greater<int>> minHeap;
        // unordered_set<int> taken;
        // for(int index = 0; index < num.size(); ++index){
        //     if(taken.count(nums[index])){
        //         continue;
        //     }
        //     if(minHeap.size() == 3){
        //         if(minHeap.top() < nums[index]){
        //             take.erase(minHeap.top());
        //             minHeap.pop();
        //             minHeap.push(nums[index]);
        //             taken.insert(nums[index]);
        //         }
        //     }else{
        //         minHeap.push(nums[index]);
        //         taken.insert(nums[index]);
        //     }
        // }
        // if(minHeap.size() == 1){
        //     return minHeap.top();
        // }else if(minHeap.size() == 2){
        //     int firstNum = minHeap.top();
        //     minHeap.pop();
        //     return max(firstNum, minHeap.top());
        // }
        // return minHeap.top();

        //  3.Ordered Set
        //  1)  원소를 저장할 정렬된 set 'sortedNums' 변수를 초기화
        //  2)  nums 배열의 모든 숫자를 반복
        //      -   만약 현재 숫자가 이미 set에 있으면 스킵
        //      -   만약 set에 3개의 숫자를 가지고 있고, 현재 숫자가 set에 있는 가장 작은 수보다 크다면
        //          가장 작은 수를 제거하고 현재 수를 삽입
        //      -   그렇지 않고, set에 숫자가 3개보다 적으면 현재 수를 삽입
        //  3)  만약 set에 3개의 숫자가 있다면, 현재 set에서 가장 작은 숫자를 반환
        //      이는 전체 nums 배열에서 3번째 큰 수 이다.
        //  4)  그렇지 않다면 set에서 가장 큰 수를 반환
        //      이는 nums배열에서 가장 큰 수 이다.
        // set<int> sortedNums;
        // for(int& num : nums){
        //     if(sortedNums.count(num)){
        //         continue;
        //     }
        //     if(sortedNums.size() == 3){
        //         if(*sortedNums.begin() < num){
        //             sortedNUms.erase(sortedNums.begin());
        //             sortedNums.insert(num);
        //         }
        //     }else{
        //         sortedNums.insert(num);
        //     }
        // }
        // if(sortedNUms.size() == 3){
        //     return *sortedNums.begin();
        // }
        // return *sortedNums.rbegin();
    }
};