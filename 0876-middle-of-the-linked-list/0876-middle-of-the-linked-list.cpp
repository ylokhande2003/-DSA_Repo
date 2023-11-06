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
    ListNode* middleNode(ListNode* head) {
     ListNode* newnode=head,ans;
        int size=0,c=0;
        while(newnode!=NULL)
        {
            size++;
            newnode=newnode->next;
        }
        if(size>=2){
             size=size/2;
        
        while(head!=NULL)
        {
            c++;
            if(size==c){
                head=head->next;
                break;
            }else{
             head=head->next;
            }

        }
        }
        
        
      return head;  
    }
};