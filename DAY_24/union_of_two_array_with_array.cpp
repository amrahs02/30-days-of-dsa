
// without any set or map

vector<int> uni;

int i = 0, j = 0;
while (i < n && j < m)
{
    if (arr1[i] < arr2[j])
    {
        uni.push_back(arr1[i++]);
        while (i < n && arr1[i] == arr1[i - 1])
            i++;
    }
    else if (arr2[j] < arr1[i])
    {
        uni.push_back(arr2[j++]);
        while (j < m && arr2[j] == arr2[j - 1])
            j++;
    }
    else
    {
        uni.push_back(arr1[i++]);
        j++;
        while (i < n && arr1[i] == arr1[i - 1])
            i++;
        while (j < m && arr2[j] == arr2[j - 1])
            j++;
    }
}

while (i < n)
{
    uni.push_back(arr1[i++]);
    while (i < n && arr1[i] == arr1[i - 1])
        i++;
}

while (j < m)
{
    uni.push_back(arr2[j++]);
    while (j < m && arr2[j] == arr2[j - 1])
        j++;
}

return (uni);

// NOT ABLE TO DO WITHOUT SET AND MAP
// STILL TRYING