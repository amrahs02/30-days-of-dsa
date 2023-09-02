


///gets TLE
long long countTriplets(long long arr[], int n, long long sum)
	{
	   int cnt = 0;
	   for(int i=0;i<n-2;i++){
	       for(int j=i+1;j<n-1;j++){
	           for(int k=j+1;k<n;k++){
	               if(arr[i]+arr[j]+arr[k]<sum){
	                   cnt++;
	               }
	           }
	       }
	   }
	   return cnt;
	}



// 2nd method two pointer approach
    long long countTriplets(long long arr[], int n, long long sum){
	    sort(arr, arr+n);
	    int cnt = 0;
	    for(int i=0;i<n-2;i++){
	        int j=i+1;
	        int k=n-1;
	        while(j<k){
	            int s = arr[i]+arr[j]+arr[k];
	            if(s<sum){
	                cnt+=(k-j);
	                j++;
	            }
	            else{
	                k--;
	            }
	        }
	    }
	    return cnt;