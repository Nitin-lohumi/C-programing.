#include<stdio.h>
struct person{
int age;
char name[10];
};
int main(){
 struct person s1 ;
 struct person *ptr=&s1;
 printf("enter the age of person");
 scanf("%d",&ptr->age);

 printf("enter the name ");
 scanf("%s",&ptr->name);


 printf("the res %d and %s",ptr->age,ptr->name);
}
