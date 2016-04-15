public class Solution {

	public ListNode removeElements(ListNode head, int val) {
	    // Write your code here
		ListNode root = head;
		while(root!=null && root.val == val){
			root = root.next;
		}
		ListNode pre = root;
		if(pre==null)
			return null;
		ListNode next = pre.next;
		while(next!=null){
			if(next.val!=val){
				pre.next = next;
				pre = next;
			}
			next = next.next;
		}
		return root;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

class ListNode{
	int val;
	ListNode next;
	public ListNode(int x){
		val = x;
	}
}
