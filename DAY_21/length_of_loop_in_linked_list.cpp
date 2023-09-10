	   Node *low=head;
	   Node *fast=head;
	   int count=1;
	   if(!head)return 0;
	   while(fast&&fast->next){
	       low=low->next;
	       fast=fast->next->next;
	       if(low==fast) {
	           low=fast->next;
	            while(low!=fast){
	               low=low->next;
	               count++;
	               }
	           return count;
	       }
	      
	   }
	   return 0;