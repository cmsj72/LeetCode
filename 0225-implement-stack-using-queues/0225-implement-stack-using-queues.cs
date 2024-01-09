public class MyStack {
    //  https://leetcode.com/problems/implement-stack-using-queues/solutions/3969470/99-74-one-queue-approach/
    //  c++ 주석에 있는 방법과 같은 원리
    //  push 할 때 x를 push 하고 que의 개수 - 1 만큼 Dequeue한 원소를 다시 Enqueue해서 가장 마지막에 
    //  추가한 x가 제일 앞에 오게함
    Queue<int> que;
    public MyStack() {
        que = new Queue<int>();
    }
    
    public void Push(int x) {
        que.Enqueue(x);
        for(int i = 0; i < que.Count - 1; i++){
            que.Enqueue(que.Dequeue());
        }
    }
    
    public int Pop() {
        return que.Dequeue();
    }
    
    public int Top() {
        return que.Peek();
    }
    
    public bool Empty() {
        return que.Count == 0;
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * int param_3 = obj.Top();
 * bool param_4 = obj.Empty();
 */