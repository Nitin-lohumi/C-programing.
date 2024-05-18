#include<stdio.h>
#include<stdlib.h>
#define NULL 0
struct node{
int data;
struct node* next;
};
void insert();
void delete();
void display();
struct node*front=NULL;
struct node* rear = NULL;
int main(){
int choice;
do{
printf("\nEnter the number\t \n 1->insert()\n 2->display() \n 3-> delete() \n");
scanf("%d",&choice);
    switch(choice){
case 1:
    insert();
    break;

case 2:
    display();
    break;
case 3:
    delete();
    break;
default:
    printf("\nthe number is invalid\n");
    }
}while(choice!=4);
}
void insert(){
struct node* temp;
int data;
printf("Enter the data\n");
scanf("%d",&data);
if(rear==NULL){
   rear= (struct node*)malloc(sizeof(struct node));
   rear->data=data;
   rear->next= NULL;
   front= rear;
}
else{
    temp= (struct node*)malloc(sizeof(struct node));
    rear->next=temp;
    temp->data=data;
    temp->next=NULL;
    rear=temp;
}
}
void delete(){
struct node* temp;
temp= front;
if(front==NULL){
    printf("empty queue");
}
else{
    if(temp->next!=NULL){
       temp=temp->next;
        free(front);
       front=temp;
       printf("deleted\n");
    }
    else{
        temp->next=NULL;
        free(front);
        front= NULL;
        rear =NULL;
    }
}
}

void display(){
struct node* temp;
temp=front;
if(front== NULL){
    printf("the queue is null\n");
}
else{
 while(temp->next!=NULL){
    printf("%d\t",temp->data);
    temp= temp->next;
 }
   printf("%d\t",temp->data);
}
}
