#include<stdio.h>
#define MAX 4
void push();
void pop();
void display();
int stack[MAX];
int top=-1;
int main(){
 int choice;
 printf("case 1 for push \n  case 2 for pop \n case 3 for display\n for exit enter 4");
 do{
 printf("\nwhat do you want\t");
 scanf("%d",&choice);
 switch(choice){
  case 1:
      push();
      break;
  case 2:
    pop();
    break;

  case 3:
    display();
    break;

  case 4:
    printf("exiting....");
    break;

  default:
    printf("\nnot valid case");

  }
 }while(choice!=4);
}
void push(){
 int item;
 if(top==MAX-1){
    printf("overflow");
 }
 else{
    printf("enter the item");
    scanf("%d",&item);
    top++;
    stack[top]=item;
    printf("the element inserted in stack is \n \t %d",stack[top]);
 }
}
void pop(){
int item;
 if(top==-1){
    printf("under flow ");
 }
 else{
    printf("the deleting element");
    item=stack[top];
    top=top-1;
 }
 printf("the deleted element is %d",item);
}
void display(){
 if(top==-1){
    printf("underflow");
 }
 else{
    for(int i=top; i>=0; i--){
        printf("\n%d\n",stack[i]);
    }
 }
}
