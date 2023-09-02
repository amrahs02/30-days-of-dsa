int findMaximum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return arr[i];
            break;
        }
    }
    return arr[n - 1];