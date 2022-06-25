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
    bool hasCycle(ListNode *head) {
        if(!head)
            return false;
        
        auto s=head, f=head;
        
        do{
            s=s->next;
            f = f and f->next? f->next->next:NULL;
            if(!f)
                return false;
        }while(f!=s);
        return true;
    }
};