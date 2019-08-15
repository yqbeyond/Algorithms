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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL) return head;
        
        ListNode* node = new ListNode(head->val);
        ListNode* ret = node;
        
        head = head->next;
        while (head != NULL){
            if (head->val != node->val) {
                node->next = new ListNode(head->val);
                node = node->next;
            }
            head = head->next;
        }
        
        return ret;
    }
};
