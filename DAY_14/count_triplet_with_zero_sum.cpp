//naive approach
bool findTriplets(int arr[], int n) {
  bool found = false;
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        if (arr[i] + arr[j] + arr[k] == 0) {

          found = true;
          break;
        }
      }
      if (found) break;
    }
    if (found) break;
  }
  return found;
}




//optimised with two pointer 
bool findTriplets(int arr[], int n){
        sort(arr, arr+n);
        for(int x=0;x<n;x++){
            int i = x+1;
            int j = n-1;
            while(i<j){
                if(arr[i]+arr[j]+arr[x]>0) j--;
                else if(arr[i]+arr[j]+arr[x]<0) i++;
                else{
                    return 1;
                }
            }
        }
        return 0;
        
    }

