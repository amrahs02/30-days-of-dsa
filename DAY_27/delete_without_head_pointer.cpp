


// 5 3 4 1 2 

 void deleteNode(Node *del){
        del->data = del->next->data; // -> 5 3 1 1 2 
        Node* temp = del->next; // -> 5 3 1 2
        del->next = del->next->next;
        free(temp);
    }