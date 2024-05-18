#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NULL 0
//singly linked list in c
struct person{
int data;
struct person *link;
};
struct person *head = NULL;
int main(){
 struct person *temp;
 struct person *next;
 struct person *move;
 int n,num,choice;
 printf("Enter the number of node");
 scanf("%d",&n);
 for(int i=0; i<n; i++){
    printf("Enter the data in node %d",i);
    scanf("%d",&num);
    next =(struct person*)malloc(sizeof(struct person*));
    next->data=num;
    next->link=NULL;
    if(head==NULL){
        head = next;
        temp= next;
    }
    else{
        temp->link=next;
        temp = next;
    }
 }
   if(head==NULL){
    printf("the linked list is empty ");
     }
   else{
    move=head;
     while(move!= NULL) {
            printf("Data = %d\n", move->data);
            move=move->link;
      }
    }
do{
printf("\nenter the choice\n 1->for insert in begining \n 2->insert at the end of list\n 3->for enter in specific position\n 4-> delete from begin\n 5->delete form end \n 6-> Specific_delete \n7-> displaying  list \n 8->exiting.....\n");
scanf("%d",&choice);
switch(choice){
    case 1:
        head = in();
                n++;
                break;
    case 2:
        insert_at_end();
        n++;
        break;
    case 3:
     specific_pos(n);
     n++;
     break;
    case 4:
        delete_form_begin();
        n--;
        break;
    case 5:
        delete_from_end();
        n--;
        break;
    case 6:
        specific_delete(n);
        n--;
        break;
     case 7:
          for(int i=0; i<n; i++){
          if(head==NULL){
          printf("the linked list is empty ");
           }
        else{
         printf("%d \t",head->data);
         head=head->link;
       }
      }
      break;
     case 8:
        printf("exiting.. for program");
        break;
    default:
        printf("\n invalid number");
    }
}while(choice!=8);
return 0;
}
//***********************************************************************************
void in(){
 struct person *ptr= (struct person*)malloc(sizeof(struct person*));
 printf("\n inserting the node in the begning of node\n");
 scanf("%d",&ptr->data);
 ptr->link=head;
 head=ptr;
}

void insert_at_end(){
struct person*ptr;
struct person * insert_end= (struct person*)malloc(sizeof(struct person*));
printf("\n enter the element to the end of the node");
scanf("%d",&insert_end->data);
insert_end->link=NULL;
ptr=head;
while(ptr->link!=NULL){
    ptr = ptr->link;
}
ptr->link=insert_end;
}
//******************************************************************************************
void specific_pos(int n){
    struct person*ptr;
    int pos,a=1;
    printf("enter the position \t");
    scanf("%d",&pos);
    ptr=head;
    if(pos>n){
        printf("the linked list is empty");
    }
    else{
     while(a<pos-1){
        ptr=ptr->link;
        a++;
     }
     struct person*insert_at_specific_pos=(struct person*)malloc(sizeof(struct person*));
     printf("\n enter the value which you want to enter ");
     scanf("%d",&insert_at_specific_pos->data);
     insert_at_specific_pos->link =ptr->link;
     ptr->link=insert_at_specific_pos;
    }
}

//*************************************************************************************
void delete_form_begin(){
struct person * ptr ;
ptr = head;
head = head -> link;
free(ptr);
}
//********************************************************************************************
void delete_from_end(){
struct person * prev ;
struct person* move ;
move = head;
while(move->link!=NULL){
    prev = move;
    move= move->link;
}
if(move == head ){
    head = NULL;
}
else {
    prev -> link= NULL;
}
free(move);
}

void specific_delete(int n){
struct person * temp;
struct person * ptr;
ptr = head;
int j =1;
int position;
printf("Enter  the position");
scanf("%d",&position);

if(position>n){
    printf("The position is empty");
}
else{
    while(j<position-1){
      ptr= ptr->link;
      j++;
    }
    temp = ptr->link;
    ptr ->link=temp->link;
}
free(temp);
}
