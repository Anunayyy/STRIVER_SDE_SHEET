class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        //traditional two pointer technique
        
        while(fast and fast->next){
            slow = slow->next;
            fast= fast->next->next;
        }
        return slow;
        
    }
};
