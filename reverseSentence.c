#include<stdio.h>
void reverse();

int main(){
  printf("Enter the number ");
  reverse();
  return 0;
}
void reverse(){
 char word;
 scanf("%c",&word);

 if(word!='\n'){
    reverse();}
    printf("%c",word);


}
