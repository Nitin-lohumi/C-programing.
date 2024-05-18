#include<stdio.h>
int factorial(int num);
int main(){
 int n;
 printf("enter the number ");
 scanf("%d",&n);
 printf("the factorial of %d is %d",n,factorial(n));
 return 0;
}
int factorial(int n)
{
    if(n>0){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }

}
