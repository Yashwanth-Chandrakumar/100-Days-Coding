/****************************************************************

 Following is the class structure of the Node class:

 class Node {
     public int data;
     public Node next;
     public Node prev;

     Node()
     {
         this.data = 0;
         this.next = null;
         this.prev = null;
     }

     Node(int data)
     {
         this.data = data;
         this.next = null;
         this.prev = null;
     }

     Node(int data, Node next)
     {
         this.data = data;
         this.next = next;
         this.prev = next;
     }
 };

 *****************************************************************/

public class Solution
{
    public static Node removeKthNode(Node head, int K)
    {
        if (head == null || K <= 0) {
            return head;
        }

        Node first = head;
        Node second = head;

        for (int i = 0; i < K; i++) {
            if (second == null) {
                return head;
            }
            second = second.next;
        }
if (second == null) {
            return head.next;
        }
 while (second.next != null) {
            first = first.next;
            second = second.next;
        }
        first.next = first.next.next;

        return head;
    }
}
