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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* nh=NULL,*temp;
        while(head!=NULL)
        {
            temp=head->next;
            head->next=nh;
            nh=head;
            head=temp;
        }
        return nh;
    }
};


// ListNode* reverseList(ListNode* head) {
//     if(head==NULL || head->next==NULL)
//         return head;
    
//     ListNode* prev=NULL;
//     ListNode* curr=NULL;
    
//     while(head!=NULL) {
//         prev=head->next;
//         head->next=curr;
//         curr=head;
//         head=prev;
//     }
//  return curr;