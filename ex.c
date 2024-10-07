#include<stdio.h>
int partining(int arr[],int l, int h){
int pivot =arr[h];
int i = (l-1);
for(int j = l; j<= h-1; j++){
   if(arr[j]<pivot){
    i++;
    swap(&arr[i],&arr[j]);
   }
}
 swap(&arr[i+1],&arr[j]);
 return (i+1);
}


void quickSort(int arr[],int l,int h){
  if(l<h){
    int partion =  partining(arr,l,h);

    quickSort(arr,l,partion-1);
    quickSort(arr,partion+1,h);
  }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unsorted array: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
