Node* deleteNode(Node *head,int x){
    int cnt = 1;
    Node* temp = head;
    
    
    if(x==1){
        //delete first (head)
        Node* nodetodelete = head ;
        head = head->next;
        free(nodetodelete);
    }
    
    while(temp!=NULL){
        //delete middle and last
        if(cnt==x-1){
            Node* nodetodelete = temp->next;
            temp->next = temp->next->next;
            free(nodetodelete);
            break;
        }
        cnt++;
        temp = temp->next;
    }
    
    return head;
    
}
