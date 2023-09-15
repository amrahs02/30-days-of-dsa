 int maxi=INT_MIN, i=0,j=0,n=S.size();
       int arr[26]={0};
       while(j<n){
          arr[S[j]-'a']++;
          while(i<n && arr[S[j]-'a']!=1){
              arr[S[i]-'a']--;
              i++;
          }
          maxi=max(maxi,j-i+1);
          j++;
       }
       return maxi;