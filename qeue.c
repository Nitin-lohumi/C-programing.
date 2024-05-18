#include<stdio.h>
#define N 10
void insert();
void delete();
void display();
int arr[N];
int front=-1;
int rear=-1;
int main(){
int choice;
do{
 printf("enter the choice \n 1- for insert \n 2 - for delete \n 3- for display\n");
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
    printf("invalid case");
}
}while(choice!=4);
}
void insert(){
int value;
if(rear==N-1){
    printf("the queue is full");
}
else{
    if(front==-1){
        front=0;
    }
        rear++;
        printf("insert a value in queue");
        scanf("%d",&value);
        arr[rear]=value;
        printf("value inserted\n");
}
}

void delete(){
if(front==-1){
    printf("the queue is empty\n");
}
else{
    if(front>rear){
        front =-1;
        rear = -1;
    }
    else{
         front++;
    }
    printf("one queue elements is deleted\n");
}
}
void display(){
if(rear==-1){
    printf("the queue is empty\n");
}
else{
    for(int i = front; i<=rear; i++){
        printf("\n\t%d\n",arr[i]);
    }
}
}
