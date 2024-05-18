#include<stdio.h>
int minMaxArray(int n);

int main(){
   int n;
   printf("enter the size of the array ");
   scanf("%d",&n);

  minMaxArray(n);

   return 0;
 }

 int minMaxArray(int n){
   int array[n];
   for(int i=0; i<n; i++){
    printf("elment : %d = \t",i);
    scanf("%d",&array[i]);
   }
   int max;
   int  min;
   min=max=array[0];
   for(int i=0; i<n; i++){
    if(max<array[i]){
     max=array[i];
    }
    else if(min>array[i]){
        min=array[i];
    }

   }
   int res=printf("the max and min array is %d and %d",max,min);
   return res;

 }
