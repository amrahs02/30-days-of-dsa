// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.
//rotate image


//firstly we did transpose of matrix
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for (int i = 0; i < n; i++) {
        int left = 0;              // Initialize the left pointer to the first element of the row
        int right = n - 1;         // Initialize the right pointer to the last element of the row
        while (left < right) {     // Continue swapping until the left pointer crosses the right pointer
            swap(matrix[i][left], matrix[i][right]);  // Swap the elements at the left and right pointers
            left++;                 // Move the left pointer one step to the right
            right--;                // Move the right pointer one step to the left
        }
    }
