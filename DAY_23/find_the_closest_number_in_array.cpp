    int findClosest(int arr[], int n, int target) 
    { 
        int temp;
       int mini = INT_MAX;
       
       for(int i=0;i<n;i++){
           int value = abs(target-arr[i]);// abs is imp
           if(value<=mini){
               mini = min(mini, value);
               temp = arr[i]; //we have to return the element of array
           }
       }
       return temp;
       
    } 

    // optimised by binary search
    // ........
