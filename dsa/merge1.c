#include <stdio.h>


void merge(int arr[], int beg, int mid, int end)
{
    int p=beg,q=mid+1;
    int A[end-beg+1],k=0;
    for(int i=beg;i<=end;i++)
    {
        if(p>mid)
        {
            A[k]=arr[q];
            k++;
            q++;
        }
        if(q>end)
        {
            A[k]=arr[p];
            k++;
            p++;
        }
        if(arr[p]>arr[q])
        {
            A[k]=arr[q];
            q++;
            k++;
        }
        else
        {
            A[k]=arr[p];
            k++;
            p++;
        }
    }
    for(int j=0;j<k;j++)
    {
        arr[beg++]=A[j];
        //beg++;
    }
}
void mergesort(int arr[], int beg, int end)
{


    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergesort(arr, beg, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}
void printarray(int a[100], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
int main()
{
    int arr[100],n;
    printf("Enter the size of element:");
    scanf("%d",&n);
    printf("\nEnter the list of elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    mergesort(arr, 0, n - 1);
    printf("After sorting array elements are - \n");
    printarray(arr, n);
    return 0;
}
