// Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.


 //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        long long sum = 0;
        int i = 0, j = 0;
        while(j < n){
           sum += arr[j];
           while(sum > s) sum -= arr[i++];
           if(sum == s && i <= j) return {i+1, j+1};
           j++;
       }
       return {-1};
    }
    //sliding window