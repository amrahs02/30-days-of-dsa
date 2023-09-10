Node* insertEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (!head) {
        return newNode;
    }

    Node* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* findIntersection(Node* head1, Node* head2) {
    unordered_map<int, int> countMap;

   //insert in map
    Node* temp1 = head1;
    while (temp1 != nullptr) {
        countMap[temp1->data]++;
        temp1 = temp1->next;
    }

    Node* intersection = nullptr;
    Node* temp2 = head2;

    while (temp2 != nullptr) {
        if (countMap.find(temp2->data) != countMap.end() && countMap[temp2->data] > 0) {
            // If the element is found and its count is greater than 0, add it to the intersection list
            intersection = insertEnd(intersection, temp2->data);
            countMap[temp2->data]--; // Decrement the count to handle duplicates
        }
        temp2 = temp2->next;
    }

    return intersection;
}


## APPROACH 2
