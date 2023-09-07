long long countPairs(int X[], int Y[], int m, int n) {
        // code here
       // x^y > y^x
       // take log on both sides
       // ylog(x)>xlog(y)
       // y/x>log(y)/log(x)
       //y/log(y)> x/log(x)
       
       vector<double> x,y;
       for(int i =0;i<m;i++) x.push_back((double)X[i]/(double)log(X[i]));
       
       for(int i =0;i<n;i++) y.push_back((double)Y[i]/(double)log(Y[i]));
        
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       
       long long cnt = 0;
       for(auto it:y){
           long long t =lower_bound(x.begin(),x.end(),it) - x.begin();
           cnt+=(t);
       }
       return cnt;