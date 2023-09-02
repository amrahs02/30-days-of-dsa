long long maxTripletProduct(long long arr[], int n)
    {
    	for(int i=0;i<n;i++){
    	    if(arr[i]<0){
    	        arr[i] = abs(arr[i]);
    	    }
    	}
        sort(arr, arr+n);//sorting
    	return (arr[n-1]*arr[n-2]*arr[n-3]);
    }


//method 2


    
    {
        sort(arr, arr + n);
        long long maxProduct = arr[n - 1] * arr[n - 2] * arr[n - 3];
        if (arr[0] < 0 && arr[1] < 0)
        {
            long long product = arr[0] * arr[1] * arr[n - 1];
            if (product > maxProduct)
                maxProduct = product;
        }

        return maxProduct;
    }
