void deleteAlt(struct Node *head){
    
    Node* ptr = head;
    Node* temp = NULL;
    
    while(ptr != NULL && ptr->next != NULL){
        
        temp = ptr->next ;
        ptr->next = temp->next;//or ptr->next->next
        free(temp);
        ptr =  ptr->next;
    }
}
