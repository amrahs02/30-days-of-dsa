	int print2largest(int arr[], int n) {
	    
	    int maxi = INT_MIN;
	    int maxi2 = INT_MIN;
	    //max
	    for(int i=0;i<n;i++){
	        if(arr[i]>maxi){
	            maxi = arr[i];
	        }
	    }

	    //smax
	     for(int i=0;i<n;i++){
	        if(arr[i]>maxi2 && arr[i]!=maxi){
	            maxi2 = arr[i];
	        }
	    }
	    if(maxi2==INT_MIN){
	        return -1;
	    }
	    return maxi2;
	}