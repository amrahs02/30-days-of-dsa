vector<int> twoRepeated (int arr[], int N) {
        N = N+2;
        vector<int>v ;
        unordered_set<int> st;
        for(int i=0;i<N;i++){
            if(st.find(arr[i])!=st.end()){
                v.push_back(arr[i]);
            }
            else{
                st.insert(arr[i]);
                if(v.size()==2){
                    break;//imp (it handle more than two repeated elements)
                }
            }
        }
        return v;
    }