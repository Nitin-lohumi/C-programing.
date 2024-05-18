#include<stdio.h>
#include<conio.h>
#define NULL 0
struct node {
 struct node * prev;
 int data;
 struct node *link;
};
struct node *head = NULL;
struct node * temp;
int main(){
int n, num;
printf("Enter the  number of node ");
scanf("%d",&n);
struct node * tail;
for(int i=0; i<n; i++){
  struct node *newnode = (struct node * )malloc(sizeof(struct node));
  printf("enter the data into new node ");
  scanf("%d",&num);
  newnode->data=num;
  newnode->prev=NULL;
  newnode->link = NULL;
  if( head==NULL){
    head = tail= newnode;
  }
  else{
    tail->link=newnode;
    newnode->prev = tail->link;
    tail =newnode;
  }
}
int choice ;

  do{
    printf("\nenter the choice\n");
scanf("%d",&choice);
switch(choice){
case 1:
     insert_beg();
    n++;
    break;
case 2:
     insert_end();
     n++;
    break;
case 3:
     spce_pos(n);
     n++;
     break;
case 4:
     delete_at_beg();
     n--;
     break;
case 5:
     delete_at_end();
     n--;
     break;

case 6:
     specific_delete(n);
     n--;
     break;
case 7:
     display(n);
     break;
default:
    printf("exiting ......");

}
  }while(choice!=8);
  //displaying doubly linked list
}
void insert_beg(){
  struct node * ptr;
  ptr=(struct node*)malloc(sizeof(struct node));
  int num;
  printf("Enter the data number ");
  scanf("%d",&num);
  ptr->prev   = NULL;
  ptr->data  = num;
  ptr->link  = head;
  head->prev =ptr;
  head = ptr;
}
void display(int n){
  temp=head;
        printf("displaying linked list \n");
  for(int i=0; i<n; i++){
    if(temp == NULL){
        printf("invalid ");
    }
    else{
        printf("%d\t",temp->data);
        temp= temp->link;
    }
  }
}

void insert_end(){
    temp=head;
struct node * ptr =(struct node*)malloc(sizeof(struct node));
int num;
printf("Enter the data");
scanf("%d",&num);
while(temp->link!=NULL){
  temp= temp->link;
}
ptr->prev=temp;
temp->link=ptr;
ptr->data=num;
ptr->link=NULL;
}
void spce_pos(int n){
int pos;
int num;
temp=head;
printf("Enten the position");
scanf("%d",&pos);
printf("\n enter the data\n");
scanf("%d",&num);
struct node*ptr;
ptr = (struct node*)malloc(sizeof(struct node));
int i =0;
if(pos>n){
    printf("not valid");
}
else{
  while(i<pos-1){
  temp=temp->link;
  i++;
  }
  ptr->data= num;
  ptr->prev=temp;
  ptr->link=temp->link;
  temp->link=ptr;
  ptr->link->prev = ptr;

}
}

void delete_at_beg(){
struct node* ptr;
ptr = head;
 head= ptr->link;
 head->prev=NULL;
 ptr->link=NULL;
 free(ptr);
}
void delete_at_end(){
 struct node*ptr;
 ptr = head;
 while(ptr->link!=NULL){
    ptr  = ptr -> link;
 }
ptr->prev->link=NULL;
}

void specific_delete(int n){
int position;
printf("enter the position");
scanf("%d",&position);
struct node* ptr;
temp=head;
int i=1;
if(position>n){
    printf("invalid position");
}
else{
    while(i<position-1){
        temp= temp->link;
    }
    ptr = temp->link;
    temp->link= ptr->link;
    ptr->link->prev=temp;
}
    free(ptr);
}
