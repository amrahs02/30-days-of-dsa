


//approach 1


 // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
 //    ListNode* a = headA;
 //    ListNode* b = headB;

 //    while (a != b) {
 //      a = a ? a->next : headB;
 //      b = b ? b->next : headA;
 //    }
 //    return a;
 //    }


//approach 2

 // insert data of first linked as key and value as true , traverse and chekc if the element of second linkedlist is present in map , if present return the curr node( that is the intersection point)

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curr = headA;
        unordered_map<ListNode*, bool> mp;

        while(curr){
            mp[curr] = true;
            curr = curr->next;
        }

        curr = headB;
        while(curr){
            if(mp[curr]==true){
                return curr;
            }
            curr = curr->next;
        }
        return 0;
    }



