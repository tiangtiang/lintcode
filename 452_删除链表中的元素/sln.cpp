/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /**
     * @param head a ListNode
     * @param val an integer
     * @return a ListNode
     */
ListNode *removeElements(ListNode *head, int val) {
        // Write your code here
        ListNode *root = head;
        while(root!=nullptr && root->val==val){
            root = root->next;
        }
        if(root == nullptr)
            return nullptr;
        ListNode *pre = root, *next = root->next;
        while(next!=nullptr){
            if(next->val != val){
                pre->next = next;
                pre = next;
                next = next->next;
            }else{
                ListNode *temp = next;
                next = temp->next;
                delete temp;
            }
        }
        pre->next=nullptr;
        return root;
    }

};
