#include<stdio.h>
int main()
{
    int i,j,n,arr[100],temp,f;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[j]<arr[i])
            {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    printf("Sorted list is:");
    for(i=1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the finding number:");
    scanf("%d",&f);
    printf("%d",arr[f]);
}
