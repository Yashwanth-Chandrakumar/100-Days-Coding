/********************************************************

    Following is the class structure of the Node class:
    
    class Node
    {
        public:
            int data;
            Node next;
            Node(int data)
            {
                this.data = data;
                this.next = null;
            }
    };

********************************************************/

public class Solution {
    public static int binaryToInteger(int n, Node head) {
        String ans="";
        while(head!=null){
            ans = ans+(head.data);
            head=head.next;
        }
        return Integer.parseInt(ans,2);
    }
}
