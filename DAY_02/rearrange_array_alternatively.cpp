// Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.




void rearrange(long long *arr, int n){ 
    	int lastidx=n-1;
    	int firstidx=0;
    	int maxi=arr[n-1]+1;
    	for(int i=0;i<n;i++){
    	    if(i%2==0){
    	        arr[i]+=(arr[lastidx]%maxi)*maxi;
    	        lastidx--;
    	    }
    	    else{
    	        arr[i]+=(arr[firstidx]%maxi)*maxi;
    	        firstidx++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	arr[i]/=maxi;	 
    }