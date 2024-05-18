#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* front=NULL;
struct node * rear = NULL;

int main(){
int choice;
do{
    printf("Enter the number -> \t ");
scanf("%d",&choice);
    switch(choice){
case 1:
    insert();
    break;
case 2:
    delete();
    break;
case 3:
    display();
    break;
default:
    printf("Invalid");
    }
}while(choice!=4);

}
void insert(){
struct node* temp;
int data;
printf("insert the data");
scanf("%d",&data);
if(rear==NULL){
    rear = (struct node*)malloc(sizeof(struct node));
    rear->data=data;
    front=rear;
    rear->next=front;
}
else{
    temp=(struct node*)malloc(sizeof(struct node));
    rear->next=temp;
    rear=temp;
    temp->data=data;
    temp->next=front;
}
}
void delete(){
struct node* temp;
temp = front;
if(temp==NULL){
    printf("emptyyy");

}
else{
    if(temp!=rear){
        temp = temp->next;
        //rear->next=temp;
        free(front);
        front=temp;
    }
    else{
        front->next=NULL;
        free(front);
        front=NULL;
        rear=NULL;
    }
}
}
void display(){
struct node* temp;
temp = front;
if(front==NULL){
    printf("empty queue\n");

}
else{
    while(temp->next!=front){
        printf("%d \t",temp->data);
        temp = temp->next;
    }
   printf("%d",temp->data);
}
}
