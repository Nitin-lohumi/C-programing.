#include <stdio.h>
#include <stdlib.h>
//cricular singly  linked list
struct node {
    int num;
    struct node *nextptr;
}*stnode;

void ClListcreation(int n);
void displayClList();

int main() {
    int n;
    stnode = NULL;
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    ClListcreation(n);
    printf("insert at begining");
    insert_beg();

    printf("insert at the last position");
    insert_at_end();

    displayClList();

     printf("delete form begining");
    delete_at_beg();
     printf("delete from end");
     delete_at_end();
    displayClList();

    return 0;
}
void ClListcreation(int n) {
    int i, num;
    struct node *preptr, *newnode;
    if (n >= 1) {
        stnode = (struct node *)malloc(sizeof(struct node));
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        preptr = stnode;
        for (i = 2; i <= n; i++) {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newnode->num = num;
            newnode->nextptr = NULL;
            preptr->nextptr = newnode;
            preptr = newnode;
        }
        preptr->nextptr = stnode;
    }
}

void displayClList() {
    struct node *tmp;
    int n = 1;
    if (stnode == NULL) {
        printf("    No data found in the List yet.");
    } else {
        tmp = stnode;
        printf("\n\n Data entered in the list are :\n");

        do {
            printf(" Data %d = %d\n", n, tmp->num);
            tmp = tmp->nextptr;
            n++;
        } while (tmp != stnode);
    }
}
void insert_beg(){
    struct node*temp;
    struct node* insert_new= (struct node*)malloc(sizeof(struct node));
    temp =stnode;
    int value;
    printf("Enter the value in begin");
    scanf("%d",&value);
    while(temp->nextptr!=stnode){
        temp = temp->nextptr;
    }
    temp->nextptr= insert_new;
    insert_new->num=value;
    insert_new->nextptr=stnode;
    stnode=insert_new;
}
void insert_at_end(){
int value;
struct node* temp;
temp=stnode;
struct node* lastNode = (struct node*)malloc(sizeof(struct node));
while(temp->nextptr!=stnode){
    temp = temp->nextptr;
}
printf("Enter the value insert at end\n");
scanf("%d",&value);
temp->nextptr=lastNode;
lastNode->num=value;
lastNode->nextptr = stnode;
}

void delete_at_beg(){
struct node * temp;
temp=stnode;
struct node* ptr;
ptr = stnode;
while(temp->nextptr!=stnode){
    temp =temp->nextptr;
}
temp->nextptr=stnode->nextptr;
stnode= stnode->nextptr;
free(ptr);
}
void delete_at_end(){
struct node*temp;
temp=stnode;
struct node*prev;

while(temp->nextptr!=stnode){
    prev = temp;
    temp = temp->nextptr;
}
prev->nextptr=stnode;
temp->nextptr=NULL;
free(temp);
}







