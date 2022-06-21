/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head)
            return head;
        auto s=head, f=head;
        do
        {
            s=s->next;
            f= f and f->next? f->next->next:NULL;
            if(!f&&!s)
                return NULL;
        }while(f!=s);
        
        while(head!=s)
        {
            head=head->next;
            s=s->next;
        }
        return head;
    }
};