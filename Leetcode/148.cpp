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
    ListNode* sortList(ListNode* head) {                
    if (head == NULL || head->next == NULL)
        return head;

    ListNode* slow = head;
    ListNode* fast = head;
        
    bool flag = true;
    while (fast != NULL && fast->next != NULL)
    {        
        fast = fast->next->next;        
        if (flag){
                flag = false;
                continue;
        }
        slow = slow->next;
    }
    
    ListNode* l2 = sortList(slow->next);
    slow->next=NULL;
    ListNode* l1 = sortList(head);

    return merge(l1, l2);
    }
    
    
    
    ListNode* merge(ListNode* left, ListNode* right) {
        if (left == NULL && right == NULL) return NULL;
        else if (left == NULL && right != NULL) return right;
        else if (left != NULL && right == NULL) return left;
        
        ListNode* root = NULL;
        ListNode* ret = NULL;
        ListNode* l=left;
        ListNode* r=right;
        if ( l->val < r->val)
        {
            ret = root = l;
            l = l->next;
        }
        else
        {
            ret = root = r;
            r = r->next;
        }
        
        while (l != NULL && r != NULL){
            if (l->val < r->val) {
                root->next = l;
                l = l->next;
            }
            else{
                root->next = r;
                r = r->next;
            }
            root = root->next;
        }
        
        if (l != NULL) root->next = l;        
        if (r != NULL) root->next = r;            
        
        return ret;
    }
};
