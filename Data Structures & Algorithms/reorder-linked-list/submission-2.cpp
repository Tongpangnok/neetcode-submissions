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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* back=slow->next;
        slow->next=NULL;

        ListNode* curr=back;
        ListNode* prev=NULL;
        while(curr!=NULL)
        {
            ListNode* nextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextNode;
        }
        ListNode* start=head;
        ListNode* newhead=prev;
         while(newhead!=NULL)
         {
            ListNode* temp1=start->next;
            ListNode* temp2=newhead->next;
            start->next=newhead;
            newhead->next=temp1;

            start=temp1;
            newhead=temp2;
         }
    }
};
