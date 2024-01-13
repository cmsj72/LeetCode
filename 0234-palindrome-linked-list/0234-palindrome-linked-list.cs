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
    public bool IsPalindrome(ListNode head) {
        //  https://leetcode.com/problems/palindrome-linked-list/solutions/3030051/c-o-n-time-and-o-1-space-beats-99-59
        var slow = head;
        var fast = head;
        ListNode prev = null;

        //  리스트의 앞쪽 절반을 역순으로 한다
        while(fast != null && fast.next != null){
            fast = fast.next.next;
            ListNode next = slow.next;
            slow.next = prev;
            prev = slow;
            slow = next;
        }

        //  위의 while문에서 fast != null 이지만 fast.next == null 이라서 
        //  반복문이 종료 된 경우(=> 리스트가 홀수 개수의 요소를 가지는 경우)
        //  중간 요소를 생략
        if(fast != null)
            slow = slow.next;

        //  첫 번째 리스트와 두 번째 리스트를 비교
        while(slow != null){
            if(slow.val != prev.val)
                return false;

            slow = slow.next;
            prev = prev.next;
        }

        return true;

        //===============
        // //  https://leetcode.com/problems/palindrome-linked-list/solutions/2470194/concise-and-easy-check-palindromity-with-sequenceequal
        // //  리스트의 내용을 문자열로 만들어 비교
        // StringBuilder sb = new();

        // while(head is not null){
        //     sb.Append(head.val);
        //     head = head.next;
        // }

        // string s = sb.ToString();

        // //  https://developer-talk.tistory.com/630
        // return s.Reverse().SequenceEqual(s);
    }
}