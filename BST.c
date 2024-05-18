#include<stdio.h>
#include<stdlib.h>
typedef struct bst{
int data;
struct bst * left;
struct bst * right;
}node;

node* create(){
 node * temp;
 printf("Enter the data for node ");
 temp= (node*)malloc(sizeof(node));
 scanf("%d",&temp->data);
 temp->left=NULL;
 temp->right = NULL;
 return temp;
}
node* find_smallest(node*root){
if(root==NULL){
    return NULL;
}
else if(root->left!= NULL){
    return find_smallest(root->left);
}
return root;

}

node*delete_node(node*root,int x){
if(root==NULL){
    return NULL;
}
if(x>root->data){
    root->right= delete_node(root->right,x);
}
else if(x<root->data){
    root->left = delete_node(root->left,x);
}
else{
    if(root->left ==NULL && root->right==NULL){
        free(root);
        return NULL;

    }
    else if(root->left ==NULL||root->right==NULL){
        node *temp;
    if(root->left==NULL){
        temp = root->right;
    }
    else{
        temp=root->left;
        free(root);
        return temp;
    }
    }
    else{
        node*temp = find_smallest(root->right);
        root->data = temp->data;
        root->right = delete_node(root->right,temp->data);
    }
}
return root;
}
void insert(node * root ,node * temp){
 if(temp->data<root->data){
    if(root->left!=NULL){
        insert(root->left,temp);
    }
    else{
        root->left=temp;
    }
 }
 if(temp->data>root->data){
    if(root->right!=NULL){
        insert(root->right,temp);
    }
    else{
        root->right=temp;
    }
 }
}

void perOrder(node* root){
if(root!=NULL){
   printf("%d \t",root->data);
   perOrder(root->left);
   perOrder(root->right);
}
printf("\n");
}

void InOrder(node* root){
if(root!=NULL){
   InOrder(root->left);
   printf("%d\t",root->data);
   InOrder(root->right);
}
printf("\n");
}

void postOrder(node * root){
if(root!=NULL){
   postOrder(root->left);
   postOrder(root->right);
   printf("%d \t",root->data);
}
printf("\n");
}

int main(){
    int choice;
    node* root = NULL;
    node* temp;
    do{
     temp = create();
     if(root==NULL){
        root=temp;
     }
     else{
        insert(root,temp);
     }
    printf("Enter your choice");
    scanf("%d",&choice);
    }while(choice!=5);
    printf("preorder traversal \n");
    perOrder(root);
    printf("The Inorder  traversal \n");
    InOrder(root);
    printf("the postOrder traversal \n");
    postOrder(root);
    int del;
    printf(" for deleting BST ");
    scanf("%d",&del);
    root = delete_node(root,del);
    printf("After delete the particular node from binary search tree\n");
    perOrder(root);
    return 0;
}

