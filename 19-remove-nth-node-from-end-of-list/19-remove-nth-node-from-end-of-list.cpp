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
        if(!head)
            return head;
        if(!head->next)
        {
            if(n==1)
                return NULL;
            else
                return head;
        }
        ListNode* delay=head, *curr=head;
        int ctr=1;
        while(curr->next!=NULL)
        {
           
            curr=curr->next;
            
            
            
            if(ctr>n)
                delay=delay->next;
            ctr++;
            if(curr->next==NULL && ctr==n)
                return head->next;
        }
        // if(curr)
        delay->next=delay->next->next;
        return head;
    }
};