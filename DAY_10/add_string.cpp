add string in leetcode


    string addstring(string X, string Y) {
        
        string ans="";
        int i=X.length()-1;
        int j=Y.length()-1;
        int carry=0;
        
        while(i>=0 and j>=0)
        {
            int num=carry+((X[i]-48))+((Y[j]-48));
            char last=char((num%10)+48);//added 48 to convert in string
            int first=num/10;//carry
            
            ans+=last; //added in new string
            carry=first; // 
            i--;
            j--;
        }
        
        while(i>=0)
        {
            int num=carry+((X[i]-48));
            char last=char((num%10)+48);
            int first=num/10;
            
            ans+=last;
            carry=first;
            i--;
        }
        
        while(j>=0)
        {
            int num=carry+((Y[j]-48));
            char last=char((num%10)+48);
            int first=num/10;
            
            ans+=last;
            carry=first;
            j--;
        }
        
        if(carry)
        ans+=char(carry+48);
        
        reverse(ans.begin(),ans.end());
        return ans;
    }