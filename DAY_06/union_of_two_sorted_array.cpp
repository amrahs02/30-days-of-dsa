{
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr1[i]);
    }
    for(int i=0;i<m;i++){
        v.push_back(arr2[i]);
    }
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    return v;
}




    class Solution{
    public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        set<int> st;
        vector<int> v;
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            st.insert(arr2[i]);
        }
        
        for(auto x:st){
            v.push_back(x);
        }
        return v;
    }
};