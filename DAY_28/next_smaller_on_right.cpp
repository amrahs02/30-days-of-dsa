void immediateSmaller(vector<int>&arr, int n) {
	    
	  for(int i=0;i<n;i++){
	      if(arr[i+1]<arr[i]){
	          arr[i] = arr[i+1];
	      }
	      else{
	          arr[i] = -1;
	      }
	  }
	  arr[n-1] = -1;
	}


	//approach 2  using stack 

	void immediateSmaller(vector<int>&arr, int n) {
	    
	  stack<int> s;
	  
	  for(int i=0;i<n;i++){
	      s.push(arr[i]);
	  }
	  
	  
	  for(int i=n-2;i>=0;i--){
	      if(arr[i]>s.top() && !s.empty()){
	          arr[i] = s.top();
	          s.pop();
	      }
	      else if(s.empty()){
	          arr[i] = -1;
	      }
	      else{
	          s.pop();
	          arr[i] = -1;
	      }
	  }
	  arr[n-1] = -1;
	}