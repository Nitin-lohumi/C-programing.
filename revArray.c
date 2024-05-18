#include<stdio.h>
int main(){
  int n;
  printf("enter the number of elements of the array\n");
  scanf("%d",&n);
  int a[n];
  printf("entering the elements of array\n");
  for(int i=1; i<n; i++){
    scanf("%d \t",&a[i]);
  }
int rev[n];
for(int i=1; i<n; i++){
    rev[i]=a[n-i];
}s
printf("revesing array is : \n");
  for(int i=1; i<n; i++){
    printf("%d \t",rev[i]);
  }
}
