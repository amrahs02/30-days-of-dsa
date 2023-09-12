intersection_of_two_linked_list.cppset<int> st;
    Node* result = new Node(0); 
    Node* resultPtr = result;

    Node* temp1 = head1;
    Node* temp2 = head2;
    
    while (temp2 != NULL) {
        st.insert(temp2->data);
        temp2 = temp2->next;
    }

    
    while (temp1 != NULL) {
        if (st.find(temp1->data) != st.end()) {
            resultPtr->next = new Node(temp1->data);
            resultPtr = resultPtr->next;
        }
        temp1 = temp1->next;
    }

    return result->next; // Skip the dummy node in the result
    }


    // some imp points here we have to put linked list 1 in set  ( because the ouput order should be according to first linked list , if we put first linked list in set then the output print as order of second linked list)
    //
    // mistakes that i made
    // 1. make two pointer one for return(at last) and one for traversng  ( i made one pointer and put all the intesection value in that pointer and i navigate to next pointer every  , so if user return at last the pointer do not given any value because out pointer is pointing at last of linked list)