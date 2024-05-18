#include<stdio.h>
int main(){
 int top=-1;
 int push;
 int stack[10];
 if(top==9){
    printf("the size is overflow");
 }
 else{
 int number;
 printf("enter the number ");
 scanf("%d",&number);

 for(int i=0; i<number; i++){
 printf("enter the item to push in this stack");
 scanf("%d",&push);
 top++;
 stack[top]=push;
 //scanf("%d",&stack[top]);
 }

 for(int i=number; i>=0; i--){
    printf("%d\n",stack[i]);
 }
  }

}
