#include<stdio.h>
void swap(int a,int b);
int main(){
 int a=200;
 int b=30;

 printf("before swaping %d\n",a);
 printf("befor swaping %d\n",b);

 swap(a,b);
 printf("after %d",a);
 printf("after %d",b);

 return 0;

 }
 void swap(int a,int b){
  int temp;
  temp=a;
  a=b;
  b=a;

  return;

 }

