class MyStack {
public:
    queue<int> q1, q2;
    int cnt;
    MyStack() {
        cnt = 0;
    }
    
    void push(int x) {
        q1.push(x);
        cnt++;
    }
    
    int pop() {
        for(int i = 0; i < cnt - 1; i++){
            q2.push(q1.front());
            q1.pop();
        }
        int ans = q1.front();
        q1.pop();
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
        cnt--;
        return ans;
    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
        //return !cnt;
    }

    //  https://leetcode.com/problems/implement-stack-using-queues/solutions/3970478/best-solution-on-leetcode/
    //  이 방법은 stack의 top 즉 가장 마지막에 들어오는 원소를 queue의 가장 앞에 오게 하도록
    //  q1에 있던 원소를 q2로 옮기고 q1에 x를 추가한 후 q2의 원소를 다시 q1으로 옮긴다
    //  
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */