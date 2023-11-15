/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL)
            return NULL;

        ListNode* fast = head;
        ListNode* slow = head;

        for (int i=0; i < k; ++i)
        {
            fast = fast->next;
            if (fast == NULL) 
            {
                k %= i + 1; 
                i = -1;    
                fast = head;
            }
        }

  
        if (fast != slow)
        {
            while (fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
           
            fast->next = head;
            head = slow->next;
            slow->next = NULL;
        }

        return head;
    }
};