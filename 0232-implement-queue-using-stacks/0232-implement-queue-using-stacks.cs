public class MyQueue {
    //  https://leetcode.com/problems/implement-queue-using-stacks/solutions/2917480/two-solutions-na-ve-optimized
    Stack<int> st = new();
    Stack<int> rev = new();
    public MyQueue() {
        
    }
    
    public void Push(int x) {
        Pump(from: rev, to: st);
        st.Push(x);
    }
    
    public int Pop() => GetFirst(isPop: true);
    
    public int Peek() => GetFirst(isPop: false);
    
    public bool Empty() => st.Count + rev.Count == 0;

    private int GetFirst(bool isPop){
        Pump(from: st, to: rev);
        return isPop ? rev.Pop() : rev.Peek();
    }

    //  from 스택에서 to 스택으로 from의 모든 요소를 옮기는 메서드
    private void Pump(Stack<int> from, Stack<int> to){
        while(from.Count > 0) to.Push(from.Pop());
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.Push(x);
 * int param_2 = obj.Pop();
 * int param_3 = obj.Peek();
 * bool param_4 = obj.Empty();
 */