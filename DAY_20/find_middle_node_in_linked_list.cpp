int getMiddle(Node *head){
        Node* temp = head;
        int len = 0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        if(len==1){
            return head->data;
        }
        
        Node* curr = head;
        int mid = len/2+1;
        int cnt = 1;
        while(curr!=NULL){
            if(cnt==mid){
                return curr->data;
            
            }
            cnt++;
            curr=curr->next;
        }
        return -1;
    }


    // #APPROACH 2  WITH FAST AND SLOW POINTER
    int getMiddle(Node *head){
       
       
       Node* slow = head;
       Node* fast = head;
       
       while(fast && fast->next){
           slow= slow->next;
           fast = fast->next;
           if(fast){
               fast = fast->next;
           }
       }
       return slow->data;
    }