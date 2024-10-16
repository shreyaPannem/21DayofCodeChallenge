bool isValid(int arr[], int n, int m, int allowedPages)
{
    int st = 1;
    int pages = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > allowedPages)
        {
            return false;
        }
        if (pages + arr[i] <= allowedPages)
        {
            pages += arr[i];
        }
        else
        {
            st++;
            pages = arr[i];
        }
    }
    return st > m ? false : true;
}
long long findPages(int n, int arr[], int m)
{
    if (m > n)
    {
        return -1;
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum;
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isValid(arr, n, m, arr[mid]))
        {
            ans = arr[mid];
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}