class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* n;
        ListNode* p = NULL;
        
        while(head){
            // take the example of 1->2->3.
            
            n = head->next;      // n=2  
            head->next=p;        //1->next = null. because it is goin to be the last memeber of the linked list;
            p=head;              //p=1. and it'll help us to connect the next elements to p.
            head=n;              //head=2. now we go another round till we reverse the list.
        }
        return p;               //don't return the head. because at the last step head==n(which is equal to null)
        
    }
};
