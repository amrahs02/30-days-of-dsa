int countPairs(struct Node* head1, struct Node* head2, int x) {
        set<int> st; // to store all elements of list 1
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        //storing list 1 in set
        while(temp1){
            st.insert(temp1->data);
            temp1 = temp1->next;
        }
        
        int cnt = 0;
        while(temp2){
            if(st.find(x-temp2->data)!=st.end()){
                cnt++;//count
            }
            temp2 = temp2->next;//moving to next value of list 2
        }
        return cnt;
        
    }

    //insert all the value of first list in set and next loop check if the sum is present in set ( or desired number - data of second linked list = data of first linked list )