vector<int> minAnd2ndMin(int a[], int n) {
        int mini = INT_MAX;
	    int mini2 = INT_MAX;
	    
	    for(int i=0;i<n;i++){
	        if(a[i]<mini){
	            mini = a[i];
	        }
	    }
	     for(int i=0;i<n;i++){
	        if(a[i]<mini2 && a[i]!=mini){
	            mini2 = a[i];
	        }
	    }
	    if(mini2 == INT_MAX){
	        return {-1};
	    }
	    return {mini, mini2};
}