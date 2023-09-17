///most efficient solution without any extra space 
bool isPalindrome(Node *head){
        Node* slow = head;
        Node* fast = head;

    // Find middle 
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half 
    Node* prev = NULL;
    while (slow) {
        Node* nextNode = slow->next;
        slow->next = prev;
        prev = slow;
        slow = nextNode;
    }

    // Compare first and reversed second half
    while (prev) {
        if (head->data != prev->data) {
            return false;
        }
        head = head->next;
        prev = prev->next;
    }

    return true;
        
    }



//apporach 2
 bool isPalindrome(Node *head){
    int arr[100000];
    int i = 0;

    Node* temp = head;
    while (temp) {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }

    int j = i;
    int end = j - 1;
    i = 0;

    while (i < end) {
        if (arr[i] != arr[end]) {
            return false;
        }
        i++;
        end--;
    }
    
    return true;
        
    }


    #//approach 3 using stack

      bool isPalindrome(Node *head){
        stack<int> s;
        
        Node* temp = head;
        while(temp){
            s.push(temp->data);
            temp = temp->next;
        }
        
        while(!s.empty()){
            if(head->data !=s.top()){
                return false;
            }
            s.pop();
            head = head->next;
        }
        return true;
        
    }



    // extension of appraoach 2


     bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode *temp = head;
        while(temp!=NULL){
            int val= temp->val;
            v.push_back(val);
            temp=temp->next;
        }
        for(int i=0,j=v.size()-1; i<v.size()/2;i++,j--){
            if(v[i]!=v[j]){
                return false;
            }
        }
        return true;
        
    }