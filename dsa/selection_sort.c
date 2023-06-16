#include<stdio.h>
int selection(int a[],int size)
{
    int i,small,j,temp;
    for(i=0;i<size-1;i++)
    {
        small=i;
        for(j=i+1;j<size;j++)
        {
        if(a[j]<a[small])
            small=j;
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
        }
    }
}
int main()
{
    int i,n,arr[100];
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the element:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
