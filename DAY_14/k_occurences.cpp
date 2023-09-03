



//TLE IN GFG
    int countOccurence(int arr[], int n, int k) {
        int count = 1;
        int ans = 1;
        sort(arr, arr+n);
        for(int i=0;i<n-1;i++){
            count=0;
            while(arr[i]==arr[i+1]){
                count++;
            }
            if(count>n/k){
                ans++;
                
            }
        }
        return ans;
    }

//OPTIMISED WITH MAP
int countOccurence(int arr[], int n, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it: mp){
            if(it.second>n/k){
                count++;
            }
        }
        return count;
    }