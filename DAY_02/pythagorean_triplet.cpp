// Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.


	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    unordered_set<int> st;
	    for(int i=0;i<n;i++){
	        arr[i] *= arr[i];
	        st.insert(arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            if(st.find(arr[i]+arr[j])!=st.end()){
	                return true;
	            }
	        }
	    }
	    return false;
	}
