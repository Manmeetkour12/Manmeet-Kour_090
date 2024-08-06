class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
           ListNode* c = head;
        while (c && c->next)
        {
            swap(c->val, c->next->val);
            c = c->next->next;
        }
        return head;
    }

};
