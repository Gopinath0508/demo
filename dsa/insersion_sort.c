#include<stdio.h>
void insertionSort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int currentElement = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > currentElement) {
      arr[j + 1] = arr[j];
      j -=  1;
    }
    arr[j + 1] = currentElement;
  }
}
int main(){
  int arr[100],i,n;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("Enter the elaments:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  insertionSort(arr, n);
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  return 0;
}
