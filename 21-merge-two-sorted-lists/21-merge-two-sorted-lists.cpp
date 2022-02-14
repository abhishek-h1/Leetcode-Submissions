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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *head=new ListNode;
        ListNode *temp=head;
        
        while(1)
        {
            if(l1==NULL)
            {
                temp->next=l2;
                break;
            }
            else if(l2==NULL)
            {
                temp->next=l1;
                break;
            }
            else if(l1->val <= l2->val)
            {
                temp->next=l1;
                l1=l1->next;
                temp=temp->next;
            }
            else
            {
                temp->next=l2;
                l2=l2->next;
                temp=temp->next;
            }
        }
        return head->next;
    }
};