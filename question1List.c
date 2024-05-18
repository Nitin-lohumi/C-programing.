#include<stdio.h>
#include<stdlib.h>
struct node1{
int data1;
struct node1 * next1;
};
struct node2{
int data2;
struct node2* next2;
} ;

struct node1*head1=NULL;

struct node2 *head2= NULL;


int main(){
 printf("insert data into linked list one\n");
 insert_data_in_node1();

 printf("\ninsert data in link list two\n ");
 insert_data_in_node2();

 display_1();
 printf("\n");
 display_2();


 rev_link_1();
 printf("\n reversing the linked list first \n ");
 display_1();

 rev_link_2();
 printf("\n reversing the linked list second \n ");
 display_2();

 printf("\nadding the two reverse linked list");
 adding();


}


void insert_data_in_node1(){
struct node1* temp;
int data;
int number_of_insertion;
printf("\nEnter the number of nodes\n");
scanf("%d",&number_of_insertion);

for(int i=0; i<number_of_insertion; i++)
{
    printf("insert the frist elements %d\t",i);
    scanf("%d",&data);
    struct node1 * newnode = (struct node1*)malloc(sizeof(struct node1));
    newnode->data1 =data;
    newnode->next1=  NULL;
     if(head1 ==NULL){
        head1= newnode;
        temp=newnode;
     }
     else{
        temp->next1=newnode;
        temp =newnode;
     }
}
}

void insert_data_in_node2(){
struct node2* temp;
int data;
int number_of_insertion;
printf("Enter the number of nodes\t \n");
scanf("%d",&number_of_insertion);

for(int i=0; i<number_of_insertion; i++)
{
    printf("insert the frist elements %d\n",i);
    scanf("%d",&data);
    struct node2* newnode = (struct node2*)malloc(sizeof(struct node2));
    newnode->data2 =data;
    newnode->next2=  NULL;
     if(head2 ==NULL){
        head2= newnode;
        temp=newnode;
     }
     else{
        temp->next2=newnode;
        temp =newnode;
     }
}
}

void rev_link_1(){
struct node1 * temp ;
temp = head1;
struct node1* prev=NULL;
struct node1* ptr;
while(temp!=NULL){
 ptr= temp ->next1;
 temp->next1=prev;
 prev = temp;
 temp= ptr;
}
head1 = prev;
}

void display_1(){
struct node1* temp;
temp=head1;
while(temp!=NULL){
    printf("%d \t",temp->data1);
    temp= temp-> next1;
}

}


 void rev_link_2(){
struct node2* temp ;
temp = head2;
struct node2* prev=NULL;
struct node2* ptr;
while(temp!=NULL){
 ptr= temp ->next2;
 temp->next2=prev;
 prev = temp;
 temp= ptr;
}
head2 = prev;
}

void display_2(){
struct node2* temp;
temp=head2;
while(temp!=NULL){
    printf("%d\t",temp->data2);
    temp= temp-> next2;
}
}


void adding(){
struct node1* temp1;
struct node2* temp2;
struct node2* sum=NULL;
temp1= head1;
temp2= head2;

while((temp1!=NULL)&& (temp2!=NULL)){
    sum = temp1->data1 + temp2->data2;
    printf(" \t %d ",sum);
    temp1= temp1->next1;
    temp2= temp2->next2;
}

}
