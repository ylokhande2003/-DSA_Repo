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
            if (fast == NULL) // when k >= list size
            {
                k %= i + 1; // remove repeating cycle using list size, which is i + 1
                i = -1;     // start over
                fast = head;
            }
        }

        // do the rotation when there is distance between slow and fast pointer.
        if (fast != slow)
        {
            while (fast->next != NULL)
            {
                fast = fast->next;
                slow = slow->next;
            }
            // for now, slow is at the new tail, fast is at the old tail
            // cut the list at the new tail, and join it to the head
            fast->next = head;
            head = slow->next;
            slow->next = NULL;
        }

        return head;
    }
};