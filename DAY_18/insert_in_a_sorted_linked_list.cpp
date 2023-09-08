Node *sortedInsert(struct Node *head, int data)
{
    if (head == NULL)
    {
        Node *t = new Node(data); // if empty we make new node and return that node
        return t;
    }

    Node *temp = new Node(data);
    if (head->data > data)
    { // if first node is greater it means we have to insert at head
        temp->next = head;
        head = temp;
        return head;
    }

    Node *prev = head;
    Node *curr = head;
    while (curr != NULL && curr->data <= data)
    { // we reach to the desire node by the loop
        prev = curr;
        curr = curr->next;
    }
    prev->next = temp; // insert curr in between prev and curr
    temp->next = curr;
    return head;
}