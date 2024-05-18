#include<stdio.h>
#define MAX 10
void insert();
void delete();
void display();
int arr[MAX];
int front=-1;
int rear =-1;
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
int item;
if(((rear +1)%MAX)==front){
    printf("queue is full");
}
else{
printf("Enter the item");
scanf("%d",&item);
if((front==-1)&&(rear ==-1)){
    rear=front=0;
}
else{
    rear = (rear+1)%MAX;
}
arr[rear]=item;
}
}

void delete(){
if(front==-1){
    printf("there is no any element to delete");
}

else{
    if(front==rear){
        front=rear=-1;
    }
    else{
        front = (front+1)%MAX;
    }

}
}
void display(){
int i= front;
while(i!=rear)
{
    printf("%d\t",arr[i]);
    i=(i+1)%MAX;
}
printf("%d",arr[rear]);
}
