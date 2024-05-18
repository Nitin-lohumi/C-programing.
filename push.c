#include<stdio.h>
void push();
int top=-1;
int arr[5];
int main(){
int choice;
 char n;
do{
printf("Enter your choice \n");
printf("1-> for push\n 2 -> for pop\n 3->  show \n");
scanf("%d",&choice);
 switch(choice){
  case 1:
      push();
      break;
  case 2:
       pop();
       break;
  case 3:
      show();
      break;
  default:
    printf("not valid choice\n");
 }
  printf("\n do it again enter y or N\t");
  scanf("%s",&n);
}while(n=='y');
}
void push(){
    int x;
    if(top==4){
        printf("stack overflow\n");
    }
    else{
        printf("enter the element in stack");
        for(int i=0; i<4; i++){
         scanf("%d",&arr[i]);
         top=top+1;
         arr[top]=arr[i];
         }
          }
    }
  void show(){
        if(top==-1){
            printf("stack have not any elements\n");
        }
        else{
            printf("printing elements \n");
            for(int i=top; i>=0; i-- ){
                printf(" arr[%d] = %d\n ",i, arr[i]);
            }
        }
    }
    void pop(){
        if(top==-1){
            printf("overflow stack");
        }
        else{
            top=top-1;
        }
    }
