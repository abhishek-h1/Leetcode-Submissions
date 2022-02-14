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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return NULL;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        int m=n/2;
        temp=head;
        for(int i=0;i<m-1;i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};