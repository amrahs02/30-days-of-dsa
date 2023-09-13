struct Node *makeUnion(struct Node *head1, struct Node *head2)
{

    set<int> st; // should be ordered set
    Node *temp1 = head1;
    Node *temp2 = head2;

    while (temp1)
    {
        st.insert(temp1->data);
        temp1 = temp1->next;
    }

    while (temp2)
    {
        st.insert(temp2->data);
        temp2 = temp2->next;
    }

    Node *curr = new Node(NULL);
    Node *head = curr;
    for (auto &it : st)
    {
        curr->next = new Node(it);
        curr = curr->next;
    }
    return head->next;
}