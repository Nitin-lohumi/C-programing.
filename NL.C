#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the element");
    scanf("%d",&n);
 int arr[n];

 for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
 }
 int largest = arr[0];
 int sec=arr[1];
 for(int i=0; i<n; i++){
    if(arr[i]>largest){
           sec = largest;
            largest = arr[i];
    }
     else if (arr[i]>sec&& arr[i]<largest){
       sec=arr[i];
     }
 }

  printf("largest = %d, second largest = %d",largest,sec);
}


