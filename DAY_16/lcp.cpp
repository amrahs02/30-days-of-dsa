// sort and check if the how many words of first and last string is same  - if same add in new string if not break the loop 



 string LCP(string ar[], int n)
    {
        sort(ar,ar+n);
        string res;
        for(int i=0;i<ar[0].size();i++){
           if(ar[0][i]==ar[n-1][i])
            res+=ar[0][i];
           else
            break;
        }
        if(res.size()>0)
            return res;
        return "-1";
    }