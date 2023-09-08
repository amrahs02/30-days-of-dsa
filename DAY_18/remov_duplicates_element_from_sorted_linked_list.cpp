Node *removeDuplicates(Node *head)
{

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {

            temp->next = temp->next->next;
            // temp->next = next_next;
            if (temp->next == NULL)
            {
                return head;
            }
            // Node* node_to_delete = temp->next;
            // delete (node_to_delete);
            continue;
        }
        temp = temp->next;
    }
    return head;
}