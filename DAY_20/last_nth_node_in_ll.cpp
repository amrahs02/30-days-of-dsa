    int getNthFromLast(Node *head, int n){
        Node *temp = head;
        int len = 1;
        while(temp!=NULL){
            len++;
            temp = temp->next;
        }
        
        Node *curr = head;
        
        int count = 1 ;
        
        while(curr!=NULL){
            if(count == len-n){
                return curr->data;
            }
            count++;
            curr = curr->next;
        }
        return -1;
    }