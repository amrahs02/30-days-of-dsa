int fractional_node(struct Node *head, int k)
{
    Node* lenptr = head;
    float len = 0;//must use float

    //finding length
    while(lenptr){
        len++;
        lenptr= lenptr->next;
    }
    
    float cnt = 1; //must use float
    Node* temp = head;
    
    int value = ceil(len/k); //desired ceil value
    while(temp){
        if(cnt == value){
            return temp->data;
        }
        temp= temp->next;
        cnt++;
    }
    return 0;
}
