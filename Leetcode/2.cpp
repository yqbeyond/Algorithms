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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int a = 0;
        int b = 0;
        int c = 0;
        ListNode* ret = NULL, *tmp = NULL;
        while (l1 != NULL && l2 != NULL){
            c = l1->val + l2->val + a;
            a = c / 10;// ? 0 : 1;
            b = c % 10; //? c : c - 10;
            if (tmp == NULL)
            {
                tmp = new ListNode(b);
                ret = tmp;
            }
            else
            {
                tmp->next = new ListNode(b);
                tmp = tmp->next;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while (l1 != NULL)
        {
            c = l1->val + a;
            a = c / 10;// ? 0 : 1;
            b = c % 10;// ? c : c - 10;
            if (tmp == NULL)
            {
                tmp = new ListNode(b);
                ret = tmp;
            }
            else
            {
                tmp->next = new ListNode(b);
                tmp = tmp->next;
            }
            l1 = l1->next;
        }
        
        while (l2 != NULL)
        {
            c = l2->val + a;
            a = c / 10;// ? 0 : 1;
            b = c % 10;// ? c : c - 10;
            if (tmp == NULL)
            {
                tmp = new ListNode(b);
                ret = tmp;
            }
            else
            {
                tmp->next = new ListNode(b);
                tmp = tmp->next;
            }
            l2 = l2->next;            
        }
        
        if (a != 0)
        {
            tmp->next = new ListNode(a);
            tmp = tmp->next;
        }
        
        return ret;
    }
};
