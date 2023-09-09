int sumOfLastN_Nodes(struct Node* head, int n){
    Node* temp = head;
    int len = 0;
    int cnt = 0, sum = 0;
    Node* curr = head;
    while(curr!=NULL){
        len++;
        curr = curr->next;
    }
    
    while(temp!=NULL ){
        if(cnt>=len-n){
            sum += temp->data;
        }
        cnt++;
        temp = temp->next;
    }
    return sum;
}



// ##approach 2 using vector (O(n)) extra space

int sumOfLastN_Nodes(struct Node* head, int n)
{
    vector<int>v;
      int count=0;
      while(head!=NULL)
      {
         count++;
         v.push_back(head->data);
         head=head->next;
      }
        int sum=0;
        for(int i=v.size()-1;i>=count-n;i--)
        {
            sum=sum+v[i];
        }
      return sum;
}




// ##approach 3 define length function outside 
    int length(Node* head){
        Node *temp = head;
        int cnt = 0;
        while(temp != NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
int sumOfLastN_Nodes(struct Node* head, int n){
    int len = length(head);
    int cnt = 1;
    int sum = 0;
    Node* curr = head;
    while(curr != NULL){
        if(cnt > len-n){
            sum+=curr->data;
        }        
            curr= curr->next;
            cnt++;
    }
    return sum ;
}