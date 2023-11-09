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
    int len(ListNode *list)
    {
        int count=0;
        while(list!=NULL)
        {
            list=list->next;
            count++;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=len(headA),l2=len(headB);
        
        if(l1>l2)
        {
            while(l1>l2)
            {
                headA=headA->next;
                l1--;
            }
        }else if(l2>l1)
        {
            while(l2>l1)
            {
                headB=headB->next;
                l2--;
            }
        }
        while(headA && headB)
        {
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        
        return NULL;
        
    }
};