

//GOT TLE WITH THIS 
vector<int> findTwoElement(vector<int> arr, int n) {
    map<int, int> mp;
    int rep = -1, mis = -1;

    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }
    for (int i = 1; i <= n; i++) {
        if (mp.find(i) != mp.end()) {
            if (mp[i] > 1) {
                rep = i; // Found the repeating number
            }
        } else {
            mis = i; // Found the missing number
        }
    }
    return {rep, mis};
    }

    //approach 2 

    // efficient
 sort(arr.begin(),arr.end());
    vector<int> ans;
    int Xor = 0^arr[n-1]^n;
    for(int  i = 0; i < n-1 ; i++){
        if(arr[i] == arr[i+1]){
            ans.push_back(arr[i]);
        }
        Xor ^= arr[i]^(i+1); //xor with every element with their index+1 means (1^1 2^2 3^3 ..... 3^4 5^5)  if input is (1 2 3 3 5) 
    }
    Xor = Xor^ans[0]; // now xor with repeating element (ans[0])
    ans.push_back(Xor);
    return ans;