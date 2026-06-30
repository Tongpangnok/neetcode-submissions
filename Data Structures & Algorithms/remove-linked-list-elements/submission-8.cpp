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
    ListNode* removeElements(ListNode* head, int val) {
      
       while(head!=NULL && head->val==val)
       {
         ListNode* temp=head;
         head=head->next;
         delete(temp);
       }
       if(head==NULL)
       {
        return NULL;
       }
        ListNode* back=head;
        
        ListNode* lead=head->next;
       
        while(lead!=NULL)
        {
            if(lead->val==val)
            {
                ListNode* target=lead;
                back->next=lead->next;
                lead=target->next;
                delete(target);
            }
            else{
            back=back->next;
            lead=lead->next;
            }
        }
        return head;
    }
};