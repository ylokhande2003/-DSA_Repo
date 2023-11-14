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
    int Listcount(ListNode* node)
    {
        int ans=0;
        while(node)
        {
            node=node->next;
            ans++;
        }
        return ans;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=Listcount(head);
        if(head==NULL&&k==1)return head;
        if(count<k)
            return head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        ListNode* current = head;
        for (int i = 0; i < k; i++) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        
        head->next = reverseKGroup(current, k);
        return prev;
    }
};