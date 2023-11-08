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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        ListNode* move=head;
        ListNode* del=NULL;
        int size=0,check=0;
        
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return NULL;
        while(temp!=NULL)
        {
            temp=temp->next;
            size++;
        }
         if(size==n){
            head=move->next;
            move->next=NULL;
            return head;
        }
        size=size-n;
         for(int i=1; i<size; i++){
            move=move->next;
        }

       
        del=move->next;
        move->next = move->next->next;
        del->next=NULL;
      
        
        return head;
    }
};