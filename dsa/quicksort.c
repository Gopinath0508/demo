#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int piv( int arr[],int left,int right)
{
    int piv,beg,high;
    piv=arr[left];
    high=right;
    beg=left;
    while(beg<high)
    {
        while(arr[beg]<piv)
        {
            beg++;
        }
        while(arr[high] >piv){
           high--;
       }
        if(beg < high){
           swap(&arr[beg],&arr[high]);
       }
    }
     swap(&arr[beg],&arr[high]);
     return high;
}
void quicksort(int array[], int low, int high) {
   if (low < high) {
       int pi = piv(array, low, high);
       quicksort(array, low, pi - 1);
       quicksort(array, pi + 1, high);

   }
}
int main()
{
    int i,j,n,arr[100];
    printf("Enter the length:");
    scanf("%d",&n);
    printf("Enter the number:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,n);
    printf("the Sorted Array is");
      for(int i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
}
