// we insert all the visited value of linked list in map and check if any one is repeated or visited

# 1 approach
bool detectLoop(Node *head)
{
    // your code here
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}

#approach 2
//  floyd's cycle detction algo (slow and fast) 
bool detectLoop(Node *head)
{

    if (head->next == NULL)
        return false;
    Node *slow = head;
    Node *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}