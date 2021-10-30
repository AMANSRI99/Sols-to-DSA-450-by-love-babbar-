void sort012(int a[], int n)
{
    int lo=0,mid=0,hi=n-1;
    for(int i=0;i<n;i++)
    {
        if(a[mid]==0)
        {
            int temp=a[mid];
            a[mid]=a[lo];
            a[lo]=temp;
            lo++;mid++;
        }
        else if(a[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=a[mid];
            a[mid]=a[hi];
            a[hi]=temp;
            hi--;
        }
    }
}