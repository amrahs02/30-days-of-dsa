//two pointer approach

long long mx = 0;
    
    int i = 0, j = len-1;
    while (i < j) {
        long long int height = j-i;
        mx = max(mx, height * min(A[i], A[j]));
        if (A[i] < A[j]) i++;
        else j--;
    }
    
    return mx;
