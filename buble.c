#include<stdio.h>
int* bublesort(int arr[],int n){
   for(int i=0; i<n-1; i++){
    for(int j=0; j <n-i-1; j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
   return arr;
}
int main(){
 int arr[] ={12,212,21,33,2,3,9};
 int n = sizeof(arr)/sizeof(arr[0]);

 int* sortArray = bublesort(arr,n);
 for(int i=0; i<n; i++){
    printf("%d\n",sortArray[i]);
 }
  return 0;
}
