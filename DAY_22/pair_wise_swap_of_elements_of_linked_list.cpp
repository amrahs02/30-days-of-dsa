 ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        
        ListNode* first = head;
        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy;
        prev->next = dummy;

        while(first && first->next){

            ListNode* second = first->next;
            ListNode* future = second->next;
            second->next = first;
            prev->next = second;
            first->next = future;
            prev = first;
            first = future;
        }
        return dummy->next;
    } 