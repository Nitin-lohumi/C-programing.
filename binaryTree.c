#include<stdio.h>
#include<stdlib.h>
typedef struct node {
int data;
struct node* left;
struct node * right;
}node;

node*create_bt(){
node*p;
int data;
printf("data \t:");
scanf("%d",&data);
if(data==0){
    return 0;
}
else{
    p= (struct node*)malloc(sizeof(struct node*));
    p->data=data;
        p->left=insert_left();
        p->right=insert_right();
}
return p;
}
 insert_left(){
node*leftNode= (struct node*)malloc(sizeof(struct node));
int data;
printf("Enter the data to left node");
scanf("%d",&data);
    leftNode->data=data;
    leftNode->left=NULL;
    leftNode->right=NULL;
   return leftNode;
}

insert_right(){
node*rightNode= (struct node*)malloc(sizeof(struct node));
int data;
printf("Enter the data to right node");
scanf("%d",&data);
    rightNode->data=data;
    rightNode->left=NULL;
    rightNode->right=NULL;
   return rightNode;
}

void preOrder(node*t){
if(t!=NULL){
    printf("%d \n",t->data);
    preOrder(t->left);
    preOrder(t->right);
}
}

void inOrder(node*t){
if(t!=NULL){
    inOrder(t->left);
    printf("%d \n",t->data);
    inOrder(t->right);
}
}

void postOrder(node* t){
if(t!=NULL){
    postOrder(t->left);
    postOrder(t->right);
    printf("%d \n",t->data);
}
}

int  main(){
node * root;
root = create_bt();
printf("the preOrder displaying binary tree \n");
preOrder(root);
printf("the inOrder displaying binary tree \n");
inOrder(root);
printf("the postOrder displaying binary tree \n");
postOrder(root);
return 0;
}





