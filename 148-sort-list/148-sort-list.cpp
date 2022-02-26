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
    
    ListNode* getMid(ListNode* head)
    {
        if(!head)
            return head;
        auto slow=head,fast=head;
        auto mid=slow;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            mid=slow;
            slow=slow->next;
        }
        mid->next=NULL;
        return slow;
    }
    
    
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode* head=new ListNode;
        auto temp=head;
        while(l1 && l2)
        {
            if(l1->val < l2->val)
            {
                temp->next=l1;
                l1=l1->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        if(l1)
            temp->next=l1;
        else if(l2)
            temp->next=l2;
        return head->next;
    }
    
    
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next)
            return head;
        auto mid=getMid(head);
        auto l=sortList(head),r=sortList(mid);
        return merge(l,r);
    }
};