#include<stdio.h>
#include<stdlib.h>
#define NULL 0
void push();
void pop();
void display();
struct node
{
int val;
struct node *next;
};
struct node * head =NULL;
int main(){
 int choice=0;
 while(choice!=4){
 printf("enter the number \n 1- push()\n 2- pop() \n 3- display()\n");
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

default:
    printf("Enter number is invalid");
    }
 }
}
void push(){
 struct node*ptr;
 ptr = (struct node*)malloc(sizeof(struct node));
 int value;
 printf("enter the value\t\n");
 scanf("%d",&value);
 if(ptr==NULL){
    printf("invalid");
 }
 else{
    if(head == NULL){
      ptr->val=value;
      ptr->next=NULL;
      head = ptr;
    }
    else{
        ptr->val=value;
        ptr->next=head;
        head= ptr;
    }
    printf("\nvalue pushed\n");
 }
}
void display(){
struct node *dis;
dis=head;
if(dis==NULL){
    printf("underflow\n");
}
else{
printf("\nthe item in stack by linked list is : \n");
while(dis!=NULL){
    printf("\n%d\t\n",dis->val);
    dis=dis->next;
}
}
}
void pop(){
  struct node* pop;
if(head==NULL){
    printf("underflow\n");
}
else{
  pop=head;
  head= head->next;
  free(pop);
  printf("\nvalue deleted\n");
}
}




