int kthSmallest(int arr[], int l, int r, int k)
    {
        priority_queue<int>maxheap;
        for(int i=l;i<=r;i++)
        {
            maxheap.push(arr[i]);
            if(maxheap.size()>k)
            {
                maxheap.pop();
            }
        }
        return maxheap.top();
    }