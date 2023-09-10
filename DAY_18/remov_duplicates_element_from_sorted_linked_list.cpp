Node *removeDuplicates(Node *head){
    Node *temp = head;
    while (temp->next != NULL){
        if (temp->data == temp->next->data){
            temp->next = temp->next->next;
            if (temp->next == NULL){
                return head;
            }
            continue;
        }
        temp = temp->next;
    }
    return head;
}


