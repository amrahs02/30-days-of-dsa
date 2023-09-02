


//only 60/62 testcases passed 
long maximumSumSubarray(int K, vector<int> &Arr , int N){
        long long maxSum = INT_MIN, sum;
        for(int i=0;i<(N-K+1);i++){
            sum = 0;
            for(int j=i;j<i+K;j++){
                sum+=Arr[j];
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }



    //2nd method 
    //sliding window method
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
       int i=0, j=0;
       long long ans = 0, sum = 0;
       while(j<N){
           sum+=Arr[j];
           if(j-i+1<K){ //window size is less
               j++;
           }
           else if(j-i+1==K){//window size hit
               ans = max(ans, sum);
               sum-=Arr[i];
               i++;
               j++;
           }
       }
       return ans;
    }