#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#define NULL 0
struct node{
struct node*prev;
int data;
struct node*next;
};

struct node*head= NULL;

void DoublyCricularList();
void insertion_beginning();
void insertion_last();
void deletion_beginning();
void deletion_last();
void display();

int main(){
int choice;
do{
    printf("\nenter the choice \n 1-> create Doubly linked list\n 2-> display \n 3-> insert_at_beg\n 4-> insert_last \n 5-> delete_beg \n 6 -> delete_last \n 7-> for exiting..\n");
    scanf("%d",&choice);
    switch(choice){
case 1:
    DoublyCricularList();
    break;
case 2:
    display();
    break;
case 3:
    insertion_beginning();
    break;
case 4:
    insertion_last();
    break;
case 5:
    deletion_beginning();
    break;
case 6:
    deletion_last();
    break;
default:
    printf("Enter number  is invalid\n");
    }
}while(choice!=10);

}

void DoublyCricularList(){
int number;
printf("enter the number of node \t  \n");
scanf("%d",&number);
int data;
struct node*ptr;
for(int i=0; i<number; i++){
    struct node * newnode= (struct node*)malloc(sizeof(struct node));
    printf("Enter the data for %d\n",i);
    scanf("%d",&data);
    newnode->prev=NULL;
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
        ptr= newnode;
        newnode->next=head;
        newnode->prev=head;
    }
    else{
        ptr->next=newnode;
        newnode->prev=ptr;
        ptr = newnode;
    }
    head->prev=ptr;
    ptr->next=head;
}
}
void display(){
struct node*temp;
temp=head;
if(head==NULL){
    printf("underflow\n");
}
else{
do{
    printf("\n%d\t",temp->data);
    temp= temp->next;
}while(temp!=head);
}
}

void insertion_beginning(){
    struct node*ptr;
    ptr= head;
    int data;
    printf("enter the data\n");
    scanf("%d",&data);
struct node*newnode= (struct node*)malloc(sizeof(struct node));
if(head==NULL){
  newnode->data=data;
  newnode->prev=newnode;
  newnode->next= newnode;
  head =newnode;
  ptr= newnode;
  printf("new node inserted\n");
}
else{
  while(ptr->next!=head){
ptr = ptr -> next;
  }
  newnode->data=data;
  newnode->next=head;
  newnode->prev=ptr;
  ptr->next=newnode;
  head->prev=newnode;
  head=newnode;
printf("newnode is inserted\n");
}
}

void insertion_last(){
 struct node*temp;
 int item;
 temp=head;
 struct node*newnode = (struct node*)malloc(sizeof(struct node));
 if(head==NULL){
    printf("there is no any node\n");
 }
 else{
    printf("enter the data\n");
    scanf("%d",&item);
    while(temp->next!=head){
        temp=temp->next;
    }
    newnode->data=item;
    temp->next=newnode;
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=temp;
 }
}

void deletion_beginning(){
struct node*temp;
struct node*ptr;
temp=head;
if(head == NULL){
    printf("doubly linked list is empty\n");
}
else{
    while(temp->next!= head){
        temp= temp->next;
    }
    ptr=temp->next;
    temp->next=head->next;
    head= head->next;
    head->prev=head->prev->prev;
    printf("value deleted successfully\n");
}
free(ptr);

}
void deletion_last(){
struct node * ptr ;
struct node* temp;
if( head == NULL){
   printf("not element for delete");
   }
   else{
     ptr= head;
     while(ptr->next!=head){
        temp= ptr;
        ptr = ptr ->next;
     }
     temp->next = ptr->next;
     head->prev = temp;
   }
   free(ptr);
}
