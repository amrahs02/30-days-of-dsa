long long int numberCount(long long int N, long long int K){
            int count = 0, temp;
            for(int i=10;i<=N;i++){
                temp = i;
                int sum_of_digit = 0;//should be in loop
                while(temp!=0){
                    sum_of_digit+=temp%10;
                    temp = temp/10;
                }
                if(i-sum_of_digit>=K) count++;
            }
            return count;
            
        }


        //use binary search to optimise