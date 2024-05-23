class RecentCounter {
public:
    queue<int> que;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        if(que.empty()){
            que.push(t);
            return que.size();
        }
        while(!que.empty() && que.front() < t - 3000){
            que.pop();
        }
        que.push(t);
        return que.size();
        //  https://leetcode.com/problems/number-of-recent-calls/solutions/873418/python-and-c-multiple-approaches-binary-search-dequeue
        //  큐가 비었을 경우가 따로 필요없음
    }

    //  submission 제일 빠른 경우
//     int counter;
//     deque<int>req;
// public:
//     RecentCounter() {
//         counter = 0;
//         while(!req.empty())req.pop_front();
//     }
    
//     int ping(int t) {
//         ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//         counter++;
//         req.push_back(t);
//         while(!req.empty() && req.front()+3000<t){
//             req.pop_front();counter--;
//         }
//         return counter;
//     }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */