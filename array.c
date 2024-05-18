#include<stdio.h>
void insert();
void delete();
int main(){
  int choice;
  printf("enter the number 1, 2 to insert or delete an array function");
  scanf("%d",&choice);
  switch(choice){
  case 1:
      insert();
      break;
  case 2:
      delete();
       break;
  default:
    printf("statement is not right");
  }
}
void insert(){
  int arr[20];
  int n;
  printf("enter the size of an array");
  scanf("%d",&n);
  if(n<20){
  for(int i=0; i<n; i++){
   scanf("%d",&arr[i]);
  }
  int index;
  printf("enter the position of the elements");
  scanf("%d",&index);
  int value;
  printf("enter the values\n");
  scanf("%d",&value);
  for(int i=n; i>=index-1; i--){
    arr[i+1]=arr[i];
  }
  arr[index-1]=value;
  n++;
   for(int i=0; i<n; i++){
    printf("arr[%d] = %d\n",i+1,arr[i]);
   }
}
else{
printf("enter size in the range of 0 to 20");

  }

}
void delete(){
    int arr[20];
    int index;
    int size;
    printf("enter the size of an array");
    scanf("%d",&size);
   printf("enter the element of an array");
   for(int i=0; i<size; i++){
    scanf("%d",&arr[i]);
   }
  printf("enter the index whixh you want to delete");
  scanf("%d",&index);
  // int dumy;
  // dumy=index;

   while(index<size){
    arr[index-1]=arr[index];
    index=index+1;
   }
   size = size -1;
   for(int i=0; i<size; i++){
    printf("arr[%d] = %d\n",i+1,arr[i]);
   }
}
