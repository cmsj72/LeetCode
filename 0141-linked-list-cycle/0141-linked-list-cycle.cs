/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public bool HasCycle(ListNode head) {
        //  https://leetcode.com/problems/linked-list-cycle/solutions/3999014/99-68-two-pointer-hash-table/
        //  https://www.techiedelight.com/ko/detect-cycle-linked-list-floyds-cycle-detection-algorithm/

        //  C++에서 사용한 HashTable을 이용한 중복 확인방법 말고 다른 풀이 방법
        //  플루이드의 주기 감지 알고리즘
        //  서로 다른 속도로 시퀀스를 이동하는 두 개의 포인터만 사용하는 포인터 알고리즘
        //  빠른 포인터를 느린 포인터보다 두 배 빠르게 이동하고 각 단계에서 두 포인터 사이의
        //  거리는 하나씩 증가
        //  둘 다 어느 시점에서 만난다면 주기를 발견
        //  그렇지 않으면 목록의 끝에 도달해 주기가 없음
        //  토끼와 거북이(hare and Tortoise) 알고리즘 이라고도 부름
        ListNode fast = head, slow = head;
        while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                return true;
            }
        }
        return false;        
    }
}