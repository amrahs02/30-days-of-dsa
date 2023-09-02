// Given a sorted array A[] of size N, delete all the duplicated elements from A[]. Modify the array such that if there are X distinct elements in it then the first X positions of the array should be filled with them in increasing order and return the number of distinct elements in the array.




class Solution{
public:
    int remove_duplicate(int a[],int n){
       if (n == 0) {
            return 0;
        }
        
        int uniqueCount = 1; // At least one unique element (the first element)
        
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[i - 1]) {
                a[uniqueCount] = a[i];
                ++uniqueCount;
            }
        }
        
        return uniqueCount;
    }
};
