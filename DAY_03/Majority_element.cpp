// Moore's Voting Algorithm : 
// https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/    
// QUESTION - https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

//BEST APPROACH
  int majorityElement(int a[],int size){
        int Maj=-1,vote=0;
        
        for(int i=0;i<size;i++){
            
            if(vote == 0){
                Maj = a[i];
                vote=1;
            }
            
            else if(a[i] != Maj)
                vote--;
            else
                vote++;
                
           
        }
        
        int cnt=0;
        for(int i=0;i<size;i++)
            if(a[i] == Maj)
                cnt++;
                
        return cnt>(size/2)?Maj:-1;                                                                                                         
    }


//2ND METHOD
    //brute APPROACH
      int cnt;
        if(size==1){
            return a[0];
        }
        for(int i=0;i<size;i++){
            cnt = 0;
            for(int j=0;j<size;j++){
                if(a[i]==a[j]){
                    cnt++;
                }
            }
            if(cnt>size/2){
                return cnt;
            }
        }
        return -1;



        //better 
         map<int, int> mp;
          for(int i=0;i<size;i++){
              mp[a[i]]++;
          }
          for(auto x:mp){
              if(x.second>size/2){
                  return x.first;
              }
          }
          return -1;