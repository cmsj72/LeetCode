/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */
public class Solution {
    // public ListNode ReverseList(ListNode head) {
    //     //  https://leetcode.com/problems/reverse-linked-list/solutions/3092785/c-shortest-fastest-iterative-solution-time-o-n/
    //     ListNode resultNode = null;
    //     //  리스트를 끝까지 이동하는 동안
    //     while(head != null){
    //         //  현재 head가 가리키는 노드의 값을 가지고 현재 가리키는 노드를 next에 저장하는 노드를 생성
    //         //  resultNode는 생성한 노드를 가리킴
    //         //  이 과정을 통해 리스트를 거꾸로 써갈 수 있음
    //         resultNode = new ListNode(head.val, resultNode);
    //         //  head를 다음 노드로 이동
    //         head = head.next;
    //     }        
    //     return resultNode;
    // }

    public ListNode ReverseList(ListNode head) {
        //  https://leetcode.com/problems/reverse-linked-list/solutions/3603747/simplest-solution-c-98-8-efficient/
        //  위의 것과 같이 원래 순서대로 리스트를 진행하면서 순서를 바꾸는 방법
        //  조금더 직관적인 코드

        
        ListNode cur = head;
        //  prev는 이전 노드 => 제일 처음 노드의 이전 노드는 없기 때문에 null
        ListNode prev = null;
        ListNode nxt = null;
        while(cur != null){
            //  현재 노드의 다음 노드를 nxt로
            nxt = cur.next;
            //  현재 노드가 가라킬 다음 순서를 현재 노드의 이전 노드로 변경
            cur.next = prev;
            //  prev를 현재 노드로 이동
            prev = cur;
            //  현재 가리키는 노드를 다음으로 이동
            cur = nxt;
        }
        return prev;
    }
}