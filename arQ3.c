#include<stdio.h>
int add(int arr[],int n);
int main(){
    int n;
    printf("Enter the size of the array \t");
    scanf("%d\n ",&n);

 int arr[n];
 for(int i=0; i<n; i++){
    scanf("\n%d\t",&arr[i]);
 }
 //add(arr,n);
printf("\n the sum of the array element is %d  \n",add(arr,n));
}

int add(int arr[], int n){
  int sum=0;
 for(int i=0; i<n; i++){
 sum=sum+arr[i];
 }
 return sum;
}
